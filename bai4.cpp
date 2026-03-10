#include <iostream>

using namespace std;
bool kiemTraNamNhuan(int year) {
  return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int laySoNgayTrongThang(int month, int year) {
  switch (month) {
  case 4:
  case 6:
  case 9:
  case 11:
    return 30;
  case 2:
    return kiemTraNamNhuan(year) ? 29 : 28;
  default:
    return 31;
  }
}

bool kiemTraNgayHopLe(int d, int m, int y) {
  if (m < 1 || m > 12)
    return false;
  if (d < 1 || d > laySoNgayTrongThang(m, y))
    return false;

  return true;
}

int main() {
  int d, m, y;
  do {
    cout << "Nhap vao ngay, thang, nam: ";
    cin >> d >> m >> y;

    if (!kiemTraNgayHopLe(d, m, y)) {
      cout << "Loi: Ngay thang nam khong hop le! Vui long nhap lai." << endl;
    }
  } while (!kiemTraNgayHopLe(d, m, y));
  int soNgayCuaThang = laySoNgayTrongThang(m, y);
  d++;
  if (d > soNgayCuaThang) {
    d = 1;
    m++;
    if (m > 12) {
      m = 1;
      y++;
    }
  }
  cout << "Ngay ke tiep la: " << d << "/" << m << "/" << y << endl;
  return 0;
}
