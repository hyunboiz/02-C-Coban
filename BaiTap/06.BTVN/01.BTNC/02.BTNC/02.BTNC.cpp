#include <iostream>
using namespace std;
int caculator(int number) { // tính giai thừa
    int result = 1;
    for (int i = 1; i <= number; i++)
        result *= i;
    return result;
}
int main()
{
    int numberA;
    int numberB;
    cout << "Nhap vao so A va B can tinh?";
    cin >> numberA;
    cin >> numberB;
    cout << "Ket qua: " << caculator(numberA) + caculator(numberB); // tổng 2 giai thừa
    return 0;
}
