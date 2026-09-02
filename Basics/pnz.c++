// Checking whether the number is positive, negative or zero

#include <iostream>
using namespace std;
int main ()
{
    int a;

    cout << "Enter your number: ";
    cin >> a;

    if (a < 0){
        cout << "Your number is negative";
    }
    else if (a == 0){
        cout << "Your number is 0";
    }
    else if (a > 0){
        cout << "Your number is postive";
    }
    else {
        cout << "Invalid statement";
    }
    return 0;
}