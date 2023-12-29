#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
    string maNV;
    string hoTen;
    int namSinh;
    double heSoLuong;
    double tienLuong;
};

int main() {
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    NhanVien danhSach[50];

    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin nhan vien " << i + 1 << ":" << endl;
        cout << "Ma nhan vien: ";
        cin >> danhSach[i].maNV;
        cout << "Ho ten: ";
        cin.ignore();
        getline(cin, danhSach[i].hoTen);
        cout << "Nam sinh: ";
        cin >> danhSach[i].namSinh;
        cout << "He so luong: ";
        cin >> danhSach[i].heSoLuong;
        danhSach[i].tienLuong = danhSach[i].heSoLuong * 1800000;
    }

    cout << "\nDanh sach nhan vien co he so luong >= 3.0:" << endl;
    for (int i = 0; i < n; i++) {
        if (danhSach[i].heSoLuong >= 3.0) {
            cout << "> " << danhSach[i].maNV << " - " << danhSach[i].hoTen << " - " << danhSach[i].namSinh << " - " << danhSach[i].heSoLuong << " - " << setprecision(10) << danhSach[i].tienLuong << endl;
        }
    }

    string maTimKiem;
    cout << "Nhap ma nhan vien can tim kiem: ";
    cin >> maTimKiem;

    bool timThay = false;
    for (int i = 0; i < n; i++) {
        if (danhSach[i].maNV == maTimKiem) {
            timThay = true;
            cout << "Tim thay nhan vien voi ma nhan vien " << maTimKiem << endl;
            cout << "[Thong tin chi tiet]" << endl;
            cout << danhSach[i].maNV << " - " << danhSach[i].hoTen << " - " << danhSach[i].namSinh << " - " << danhSach[i].heSoLuong << " - " << setprecision(10) << danhSach[i].tienLuong << endl;
            //break;
        }
    }

    if (!timThay) {
        cout << "Khong tim thay nhan vien voi ma nhan vien " << maTimKiem << endl;
    }

    return 0;
}
