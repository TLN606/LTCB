#include <iostream>
using namespace std;

// Hàm con để sử lý bài toán
double tinhS(int n) {
    double sum = 0;

    for (int i = 1; i <= n; i++) {  // Thuật toán được giải thích như sau:
        sum += (double)i / (i + 1); // Tổng = Tổng trước + i / (i + 1)
    }                               // Ví dụ trong đường dẫn:
    return sum; // Trả về giá trị tổng (sum)
}

// Hàm mẹ để nhập số liệu và gọi tên hàm con
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Gia tri cua S la: " << tinhS(n);
    return 0;
}
