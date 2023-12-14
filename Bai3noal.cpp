#include <iostream>
#include <fstream>

using namespace std;

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

// Hàm sắp xếp danh sách sinh viên giảm dần theo điểm trung bình (không sử dụng thư viện algorithm)
void sapXepDanhSachSinhVien(SinhVien danhSach[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (danhSach[i].diemTB < danhSach[j].diemTB) {
                swap(danhSach[i], danhSach[j]);
            }
        }
    }
}

// Hàm lưu danh sách sinh viên có điểm trung bình >= 5 vào file text OUTPUT.OUT
void luuDanhSachSinhVien(SinhVien danhSach[], int n) {
    ofstream fileOut("OUTPUT.OUT");
    //fileOut << "MSSV " << "|" << "Tên " << "|" << "Giới tính " << "|" << "Điểm" << endl;
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
