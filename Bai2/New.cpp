//Test
#include <bits/stdc++.h>
using namespace std;

struct sinhVien {
  string soBaoDanh;
  string hoTen;
  double diemCoSo;
  double diemChuyenNganh;
  double diemTrungBinh;
  string xepLoai;
};

void tinhXepLoai(sinhVien &sv) {
  sv.diemTrungBinh = (sv.diemCoSo + sv.diemChuyenNganh) / 2;
  if (sv.diemTrungBinh >= 9) {
    sv.xepLoai = "Gioi";
  } else if (sv.diemTrungBinh >= 7 && sv.diemTrungBinh < 9) {
    sv.xepLoai = "Kha";
  } else if (sv.diemTrungBinh >= 5 && sv.diemTrungBinh < 7) {
    sv.xepLoai = "Trung binh";
  } else if (sv.diemTrungBinh < 5) {
    sv.xepLoai = "Yeu";
  } else {
    cout << "> Diem trung binh khong hop le! <" << endl;
  }
}

void nhapSinhVienMoi(sinhVien &sv) {
  cout << "> Nhap so bao danh: ";
  cin >> sv.soBaoDanh;
  cout << "> Nhap ho ten: ";
  cin.ignore();
  getline(cin, sv.hoTen);
  cout << "> Nhap diem co so: ";
  cin >> sv.diemCoSo;
  cout << "> Nhap diem chuyen nganh: ";
  cin >> sv.diemChuyenNganh;
  tinhXepLoai(sv);
}


void nhapSinhVien(sinhVien sv[], int n) {
  for (int i = 0; i < n; i++) {
     cout << "\nNhap thong tin sinh vien thu " << i + 1 << ": " << endl;
    nhapSinhVienMoi(sv[i]);
    cout << endl;
  }
}

void xuatDanhSachSinhVien(sinhVien sv[], int n) {
  cout << "\n== Danh sach sinh vien: ==" << endl;
  for (int i = 0; i < n; i++) {
    cout << setw(5) << "SBD";
  cout << setw(20) << "HO TEN";
  cout << setw(15) << "DIEM CO SO";
  cout << setw(25) << "DIEM CHUYEN NGANH";
  cout << setw(25) << "DIEM TRUNG BINH";
  cout << setw(15) << "XEP LOAI";
  cout << endl;
    cout << setw(5) << sv[i].soBaoDanh;
    cout << setw(20) << sv[i].hoTen;
    cout << setw(15) << sv[i].diemCoSo;
    cout << setw(25) << sv[i].diemChuyenNganh;
    cout << setw(25) << sv[i].diemTrungBinh;
    cout << setw(15) << sv[i].xepLoai;
    cout << endl;
  }
  
  for (int i = 0; i <= 104; i++) {
      cout << "-";
  }
  cout << endl;
  }


void xuatSinhVienTren5(sinhVien sv[], int n) {
  cout << "\n== Sinh vien co diem trung binh tren 5 & khong co mon nao duoi 3: ==" << endl;
  for (int i = 0; i < n; i++) {
    if (sv[i].diemTrungBinh >= 5 && sv[i].diemCoSo >= 3 && sv[i].diemChuyenNganh >= 3) {
      cout << setw(5) << "SBD";
      cout << setw(20) << "HO TEN";
      cout << setw(15) << "DIEM CO SO";
      cout << setw(25) << "DIEM CHUYEN NGANH";
      cout << setw(25) << "DIEM TRUNG BINH";
      cout << setw(15) << "XEP LOAI";
      cout << endl;
    cout << setw(5) << sv[i].soBaoDanh;
    cout << setw(20) << sv[i].hoTen;
    cout << setw(15) << sv[i].diemCoSo;
    cout << setw(25) << sv[i].diemChuyenNganh;
    cout << setw(25) << sv[i].diemTrungBinh;
    cout << setw(15) << sv[i].xepLoai;
    cout << endl;
  }
  
  for (int i = 0; i <= 104; i++) {
      cout << "-";
  }
  cout << endl;
  }
}

void xuatSinhVienYeu(sinhVien sv[], int n) {
  cout << "\n== Sinh vien co xep loai yeu: ==" << endl;
  for (int i = 0; i < n; i++) {
    if (sv[i].xepLoai == "Yeu") {
      cout << "\nSinh vien thu " << i + 1 << ": " << endl;
      cout << "> So bao danh: " << sv[i].soBaoDanh << endl;
      cout << "> Ho ten: " << sv[i].hoTen << endl;
      cout << "> Diem co so: " << sv[i].diemCoSo << endl;
      cout << "> Diem chuyen nganh: " << sv[i].diemChuyenNganh << endl;
      cout << "> Diem trung binh: " << sv[i].diemTrungBinh << endl;
      cout << "> Xep loai: " << sv[i].xepLoai << endl;
    }
  }
  cout << "> Khong co sinh vien xep loai yeu: " << endl;
}

void chenSinhVien(sinhVien sv[], int &n, sinhVien newSV, int k) {
  if (k < 0 || k > n) {
    cout << "> Vi tri chen khong hop le! <" << endl;
    return;
  }
  for (int i = n; i > k; i--) {
    sv[i] = sv[i - 1];
  }
  sv[k] = newSV;
  n++;
}

void xoaSinhVien(sinhVien sv[], int &n, int k) {
  if (k < 0 || k >= n) {
    cout << "> Vi tri xoa khong hop le! <" << endl;
    return;
  }
  for (int i = k; i < n - 1; i++) {
    sv[i] = sv[i + 1];
  }
  n--;
}

void sapXepDiemTrungBinhTangDan(sinhVien sv[], int n) {
  cout << "== Danh sach sap xep theo diem trung binh tang dan: ==" << endl;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (sv[i].diemTrungBinh > sv[j].diemTrungBinh) {
        swap(sv[i], sv[j]);
      }
    }
  }
}

void thongKe(sinhVien sv[], int n) {
  int countGioi = 0, countKha = 0, countTrungBinh = 0, countYeu = 0;
  for (int i = 0; i < n; i++) {
    if (sv[i].xepLoai == "Gioi") {
      countGioi++;
    } else if (sv[i].xepLoai == "Kha") {
      countKha++;
    } else if (sv[i].xepLoai == "Trung binh") {
      countTrungBinh++;
    } else if (sv[i].xepLoai == "Yeu") {
      countYeu++;
    }
  }

  cout << "\n== Thong ke: ==" << endl;
  cout << "> Gioi: " << countGioi << endl;
  cout << "> Kha: " << countKha << endl;
  cout << "> Trung binh: " << countTrungBinh << endl;
  cout << "> Yeu: " << countYeu << endl;
}

int main() {
  cout << "== CHUONG TRINH QUAN LY SINH VIEN ==" << endl;
  int n;
  cout << "\nNhap so luong sinh vien: ";
  cin >> n;
  sinhVien sv[100];
  nhapSinhVien(sv, n);
  xuatDanhSachSinhVien(sv, n);
  xuatSinhVienTren5(sv, n);
  xuatSinhVienYeu(sv, n);

  int k;
  cout << "\nNhap vi tri can chen: ";
  cin >> k;
  sinhVien newSV;
  cout << "\nNhap thong tin sinh vien moi can chen: " << endl;
  nhapSinhVienMoi(newSV);

  chenSinhVien(sv, n, newSV, k);
  xuatDanhSachSinhVien(sv, n);

  cout << "\nNhap vi tri can xoa: ";
  cin >> k;
  xoaSinhVien(sv, n, k);
  xuatDanhSachSinhVien(sv, n);

  sapXepDiemTrungBinhTangDan(sv, n);
  xuatDanhSachSinhVien(sv, n);

  thongKe(sv, n);
  
  return 0;
}
