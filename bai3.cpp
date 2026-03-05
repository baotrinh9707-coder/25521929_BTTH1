#include <bits/stdc++.h>
#include <numeric>
using namespace std;

void inPhanSo(int tu, int mau) {
  if (tu == 0) {
    cout << 0 << endl;
    return;
  }
  if (mau < 0) {
    tu = -tu;
    mau = -mau;
  }
  int ucln = std::gcd(abs(tu), abs(mau));
  tu /= ucln;
  mau /= ucln;
  if (mau == 1) {
    cout << tu << endl;
  } else {
    cout << tu << "/" << mau << endl;
  }
}

int main() {
  int a, b, c, d;
  cout << "Nhap tu so cua phan so thu nhat: ";
  cin >> a;
  cout << "Nhap mau so cua phan so thu nhat: ";
  cin >> b;
  cout << "Nhap tu so cua phan so thu hai: ";
  cin >> c;
  cout << "Nhap mau so cua phan so thu hai: ";
  cin >> d;

  if (b == 0 || d == 0) {
    cout << "Phan so khong hop le." << endl;
  } else {
    cout << "Tong hai phan so la: ";
    inPhanSo(a * d + b * c, b * d);
    cout << "Hieu hai phan so la: ";
    inPhanSo(a * d - b * c, b * d);

    cout << "Tich cua hai phan so la: ";
    inPhanSo(a * c, b * d);

    if (c == 0) {
      cout << "Khong the thuc hien phep chia phan so." << endl;
    } else {
      cout << "Thuong cua hai phan so la: ";
      inPhanSo(a * d, b * c);
    }
  }
  return 0;
}
