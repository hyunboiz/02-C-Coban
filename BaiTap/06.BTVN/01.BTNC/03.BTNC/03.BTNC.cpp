// CHUA HOAN THIEN
#include<iostream>
#include<string>
using namespace std;
string arr[] = ;
void nhapMang(int a[], int n) { // nhập mảng array
    for (int i = 0; i < n; i++) {
        cout << "Nhap vao so[" << i << "] : ";
        cin >> a[i];
    }
}
void xuat(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int caculator(int a[]) { // tính giai thừa
    int giaithua = 1;
    int tong = 1;
    for (int i = 1; i <= a[i]; i++)
        giaithua *= i;
        tong += giaithua;
    return tong;
}
int main() {
    int a[1000];
    int n;
    cout << "Nhap N so : ";
    cin >> n;
   // nhapMang(a, n);
    cout << "Ket qua:" << caculator() << endl;
    return 0;
}
