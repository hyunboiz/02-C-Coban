// 05.Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
    int score[5];
    std::cout << "Enter number of student: ";
    short numberStudent;
    cin >> numberStudent;

    cin.ignore(1000, '\n');
    string name[50];
    string age[50];
    string cl4ss[50];

    double toan[50], ly[50], hoa[50];

    for (int i = 0; i <= numberStudent; ++i) {
        cout << "Enter name student" << i + 1 << " : ";
        getline(cin, name[i]);

        cout << "Enter age student: ";
        cin >> age[i];

        cin.ignore(1000, '\n');

        cout << "Enter class: ";
        getline(cin, cl4ss[i]);

        cout << "Enter score";
        cin >> toan[i] >> ly[i] >> hoa[i];

        cin.ignore(1000, '\n');

    }


}

