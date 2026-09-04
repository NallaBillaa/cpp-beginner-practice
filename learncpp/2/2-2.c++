#include <iostream>
using namespace std;

int inputvalue()
{
    int a;
    cout << "Enter your number";
    cin >> a;
    return a;
}

int main ()
{
    int x{inputvalue()};
    int y {inputvalue()};

    cout << x << " + " << y << " = " << x + y;

    return 0

}    