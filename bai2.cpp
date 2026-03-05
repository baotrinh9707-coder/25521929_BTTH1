#include <bits/stdc++.h>
using namespace std;

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
  if (b == 0 || d == 0)
    cout << "Phan so khong hop le.";
  else {
    if ((double)a / b < (double)c / d)
      cout << "Phan so lon nhat la: " << c << "/" << d;
    else
      cout << "Phan so lon nhat la: " << a << "/" << b;
  }
  return 0;
}
