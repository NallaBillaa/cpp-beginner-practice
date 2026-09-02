// Finding the largest number out of given numbers

#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int largest = a;

    if (b > largest)
    {
        largest = b;
    }
    else if (c > largest)
    {
        largest = c;
    }
    cout << "The largest number is: " << largest;

    return 0;
}