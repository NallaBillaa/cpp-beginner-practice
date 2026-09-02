// Basic Calculator

#include <iostream>
using namespace std;

int main ()
{
    char choice;
    double a,b;

    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;
    cout << "\nWhich operation do you want: \n?";
    cout << "a) Addition\n?"; 
    cout << "b) Subtraction\n?";
    cout << "c) Product\n";
    cout << "d) Quotient\n";
    cout << "\nEnter your choice";
    cin >> choice;

    if (choice == 'a'){
        cout << "Result:" << a + b;
    }
    else if (choice == 'b'){
        cout << "Result:" << a - b;
    }
    else if (choice == 'c'){
        cout << "Result:" << a * b;
    }
    else if (choice == 'd'){
        if (b!=0){
        cout << "Result:" << a / b;
        }
        else {
            cout << "Cannot divide by zero";
        }
    }
    else {
        cout << "Invalid Choice";
    }
    return 0;
}