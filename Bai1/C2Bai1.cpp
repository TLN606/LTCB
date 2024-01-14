#include <bits/stdc++.h>
using namespace std;

#define Max 100

int A[Max];
int n;
int X, K;

void nhapGiaTri(int A[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "> Nhap gia tri thu " << i + 1 << ": ";
    cin >> A[i];
  }
}

void xuatGiaTri(int A[], int n) {
  cout << "Gia tri cua mang la: \n{ ";
  for (int i = 0; i < n; i++) {
    cout << A[i] << " ";
  }
  cout << "}" << endl;
}

void kiemTraX(int A[], int n, int X) {
  for (int i = 0; i < n; i++) {
    if (A[i] == X) {
      cout << X << " co xuat hien trong danh sach A tai phan tu thu: " << i << endl;
      return;
    }
  }
  cout << X << " khong xuat hien trong danh sach A." << endl;
}

void chenX(int A[], int &n, int X, int K) {
  if (K < 0 || K > n) {
    cout << "Khong the chen X vao vi tri K." << endl;
    return;
  }
  for (int i = n; i > K; i--) {
    A[i] = A[i - 1];
  }
  A[K] = X;
  n++;
  xuatGiaTri(A, n);
}

void xoaPhanTu(int A[], int &n, int K) {
  if (K < 0 || K >= n) {
    cout << "Khong the xoa phan tu tai vi tri K." << endl;
    return;
  }
  for (int i = K; i < n - 1; i++) {
    A[i] = A[i + 1];
  }
  n--;
  xuatGiaTri(A, n);
}

void sapXepGiamDan(int A[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (A[i] < A[j]) {
        swap(A[i], A[j]); // Su dung thuat toan hoac
        //int temp = A[i];
        //A[i] = A[j];
        //A[j] = temp;
      }
    }
  }
  xuatGiaTri(A, n);
}

void timMinMax(int A[], int n) {
  int min = A[0];
  int max = A[0];
  for (int i = 1; i < n; i++) {
    if (A[i] < min) {
      min = A[i];
    }
    if (A[i] > max) {
      max = A[i];
    }
  }
  cout << "Gia tri nho nhat trong mang la: " << min << endl;
  cout << "Gia tri lon nhat trong mang la: " << max << endl;
}

int main() {
  cout << "Nhap so phan tu cua mang: ";
  cin >> n;

  if (n <= 0) {
    cout << "So phan tu khong hop le!" << endl;
    return 0;
  }
  
  nhapGiaTri(A, n);
  xuatGiaTri(A, n);

  cout << "Nhap gia tri X: ";
  cin >> X;
  kiemTraX(A, n, X);

  cout << "Nhap gia tri X can chen: ";
  cin >> X;
  cout << "Nhap vi tri K can chen X: ";
  cin >> K;
  chenX(A, n, X, K);

  cout << "Nhap vi tri K can xoa: ";
  cin >> K;
  xoaPhanTu(A, n, K);

  sapXepGiamDan(A, n);
  timMinMax(A, n);
}