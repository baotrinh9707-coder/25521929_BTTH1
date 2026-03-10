#include <bits/stdc++.h>
using namespace std;

int main() {
  string hoTen;
  float diemToan, diemVan;
  cout << "Ho ten: ";
  getline(cin, hoTen);

  cout << "Diem Toan: ";
  cin >> diemToan;

  cout << "Diem Van: ";
  cin >> diemVan;

  float DTB = (diemToan + diemVan) / 2;

  cout << "Ho ten:" << hoTen << endl;
  cout << "Diem trung binh: " << DTB << endl;
  return 0;
}
