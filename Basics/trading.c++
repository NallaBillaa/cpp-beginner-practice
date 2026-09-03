// Basic trading decision simulator

#include <iostream>
using namespace std;
int main ()
{
    double b,c;
    int shares;
    cout << "Enter buying price: ";
    cin >> b;
    cout << "Enter current price: ";
    cin >> c;
    cout << "Enter number of shares: ";
    cin >> shares;

    if (b < c){
        cout << "You are in profit" << endl;
        cout << "Profit: " << (c - b)*shares << endl;
        cout << "Profit percentage: " << ((c - b)/b)*100 << "%" << endl;
    }
    else if (b == c){
        cout << "You are in break-even" << endl;
        cout << "Profit: 0" << endl;
        cout << "Profit percentage: 0" << endl;
        cout << "Loss: 0" << endl;
        cout << "Loss percentage: 0" << endl;
    }
    else {
        cout << "You are in loss" << endl;
        cout << "Loss: " << (c - b)*shares << endl;
        cout << "Loss percentage: " << ((b - c)/b)*100 << "%" << endl; 
    }
    return 0;
} 