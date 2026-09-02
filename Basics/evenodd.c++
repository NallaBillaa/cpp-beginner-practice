#include <iostream>
using namespace std;
int main ()
{
    int a;
    cout << "Enter your number";
    cin >> a;

    if (a%2 == 0){
        cout << "Your number is even";
    }
    else {
        cout << "Your number is odd";
    }
    return 0;
}