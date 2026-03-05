#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() {
  int a, b;
  cout << "Nhap tu so: ";
  cin >> a;
  cout << "Nhap mau so: ";
  cin >> b;
  if (b == 0)
    cout << "Phan so khong hop le.";
  else {
    int d = std::gcd(a, b);
    a = a / d;
    b = b / d;
    cout << "Phan so da rut gon la: " << a << "/" << b;
  }
  return 0;
}
