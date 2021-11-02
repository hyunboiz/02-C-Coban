#include <iostream>
using namespace std;
int caculator(int numberA){ // tính giai thừa
    int result = 1;
    for (int i = 1; i <= numberA; i++)
        result *= i;
    return result;
}
int main()
{
    int numberA;
    cout << "Nhap vao so A can tinh?";
    cin >> numberA;
    cout << "Ket qua: " << caculator(numberA);
    return 0;
}
