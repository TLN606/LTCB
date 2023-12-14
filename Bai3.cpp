#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

// Khai báo cấu trúc của Sinh viên
struct SinhVien {
    string maSV;
    string hoTen;
    string gioiTinh;
    float diemTB;
};

// Hàm nhập danh sách sinh viên
void nhapDanhSachSinhVien(SinhVien danhSach[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin cho sinh vien thu " << i + 1 << ":" << endl;
        cout << "Ma sinh vien: ";
        cin >> danhSach[i].maSV;
        cout << "Ho ten: ";
        cin.ignore();
        getline(cin, danhSach[i].hoTen);
        cout << "Gioi tinh: ";
        cin >> danhSach[i].gioiTinh;
        cout << "Diem trung binh: ";
        cin >> danhSach[i].diemTB;
    }
}

// Hàm sắp xếp danh sách sinh viên giảm dần theo điểm trung bình
bool compareSV(SinhVien a, SinhVien b) {
    return a.diemTB > b.diemTB;
}

void sapXepDanhSachSinhVien(SinhVien danhSach[], int n) {
    sort(danhSach, danhSach + n, compareSV);
}

// Hàm lưu danh sách sinh viên có điểm trung bình >= 5 vào file text OUTPUT.OUT
void luuDanhSachSinhVien(SinhVien danhSach[], int n) {
    ofstream fileOut("OUTPUT.OUT");
    for (int i = 0; i < n; i++) {
        if (danhSach[i].diemTB >= 5) {
            fileOut << danhSach[i].maSV << " " << danhSach[i].hoTen << " " << danhSach[i].gioiTinh << " " << danhSach[i].diemTB << endl;
        }
    }
    fileOut.close();
}

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    SinhVien danhSach[n];

    nhapDanhSachSinhVien(danhSach, n);
    sapXepDanhSachSinhVien(danhSach, n);
    luuDanhSachSinhVien(danhSach, n);

    return 0;
}
