#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int i;
    do
    {
        cout << "\n---------------------- WELCOME TO MY SIMPLE CALCULATOR ----------------------\n" << endl;
        int a, b;
        int op;
        cout << "Enter two number seperated by spaces : ";
        cin >> a;
        cin >> b;
        cout << "\n-----------------------------------------------------------------------------\n" << endl;
        cout << "Press 1 for Addition (+) >>>" << endl;
        cout << "Press 2 for Subtraction (-) >>>" << endl;
        cout << "Press 3 for Multiplication (*) >>>" << endl;
        cout << "Press 4 for Division-Quotient (/) >>>" << endl;
        cout << "Press 5 for D-Remainder (%) >>>" << endl;
        cout << "Press 6 for Power (^) >>>" << endl;
        cout << "\nSelect any Operation : ";
        cin >> op;
        cout << "\nYour Answer is : ";

        switch (op)
        {
        case 1:
            cout << (a + b) << endl;
            break;
        case 2:
            cout << (a - b) << endl;
            break;
        case 3:
            cout << (a * b) << endl;
            break;
        case 4:
            cout << (a / b) << endl;
            break;
        case 5:
            cout << (a % b) << endl;
            break;
        case 6:
            cout << pow(a , b) << endl;
            break;
        default:
            cout << "Operation not Found...! Please Try Again...\n";
            break;
        }
        cout << "\n-----------------------------------------------------------------------------\n" << endl;
        cout << "Press 1 for Continue >>>" << endl;
        cout << "Press 0 for End >>>" << endl;
        cout << "\nAre You want to Continue? (1/0) : ";
        cin >> i;
    }
    while (i);

    cout << "\nThank You for using this Calculator...!\n";

    return 0;
}