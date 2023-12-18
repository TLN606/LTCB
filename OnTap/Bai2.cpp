#include <iostream>

using namespace std;

void lietKeUocSo(int n) {
    cout << "Cac uoc so cua " << n << " la: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int number;
    cout << "Nhap so nguyen duong n: ";
    cin >> number;
    lietKeUocSo(number);
    return 0;
}
