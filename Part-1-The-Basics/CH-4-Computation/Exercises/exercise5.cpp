#include <iostream>
using namespace std;

int main()
{
    double a = 0;
    double b = 0;
    char operation = ' ';
    
    cout << "Enter two values to operate and following with operator sign (+, -, /, *)\n";
    cin >> a >> b >> operation;

    switch(operation){
        case '+':
            cout << "The sum of " << a << " and " << b << " is " << a + b << '\n';
        case '-':
            cout << "The subtration of " << a << " and " << b << " is " << a - b << '\n';
            break;
        case '/':
            cout << "The division of " << a << " by " << b << " is " << a / b << '\n';
            break;
        case '*':
            cout << "The multiplication of " << a << " and " << b << " is " << a * b << '\n';
            break;
        default:
            "You have entered the wrong data\n";
    }
}