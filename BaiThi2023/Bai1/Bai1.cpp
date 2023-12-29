#include<bits/stdc++.h>
using namespace std;
int main() {
  string hoTen;
  int NS;
  double diemLT;
  double diemTH;
  char xepLoai;
    
  cout << "Nhap thong tin thi sinh: " << endl;
  cout << "> Nhap ho va ten: ";
  getline(cin, hoTen);
  cout << "> Nhap nam sinh: ";
  cin >> NS;
  cout << "> Nhap diem Ly thuyet: ";
  cin >> diemLT;
  cout << "> Nhap diem Thuc hanh: ";
  cin >> diemTH;
    
  double diemTB;
  diemTB = (diemLT + diemTH) / 2;
    
  if (diemTB >= 8) {
    xepLoai = 'A';
  }
  else if (diemTB >= 5 && diemTB < 8) {
    xepLoai = 'C';
  }
  else if (diemTB < 5) {
    xepLoai = 'D';
  }
  else {
    cout << "> Diem trung binh khong hop le! <";
    return 1;
  }
    
  cout << "Ho va ten: " << hoTen << endl;
  cout << "Nam sinh: " << NS << endl;
  cout << "Diem ly thuyet: " << diemLT << endl;
  cout << "Diem thuc hanh: " << diemTH << endl;
  cout << "Diem trung binh: " << diemTB << endl;
  cout << "=> Xep loai: " << xepLoai << endl;

  return 0;
}
