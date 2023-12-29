#include <bits/stdc++.h>
using namespace std;

// Ham tinh luy thua
double tinhLuyThua(double x, int n) {
    double ketQua = 1.0;
    for (int i = 0; i < n; i++) {
        ketQua *= x;
    }
    return ketQua;
}

// Ham tinh tong S
double tinhTong(int x, int n) {
    double tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += i / tinhLuyThua(x, i);
    }
    return tong;
}

int main() {
    int x, n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;

    // Kiem tra n > 0
    if (n <= 0) {
        cout << "n phai la so nguyen duong." << endl;
        return 0;
    }

    double sum = tinhTong(x, n);
    cout << "Tong S = " << sum << endl;

    return 0;
}
