#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int sum = a+b;
    int subb = a-b;
    int mull = a*b;
    double ratio = a/double(b);

    if (a > b)
        cout << a << " is greater than " << b;
    else if (a < b)
        cout << a << " is smaller than " << b;
    else
        cout << a << " is equal to " << b;

    cout << "\nsum == " << sum
         << "\nsubtration == " << subb
         << "\nmultiplication == " << mull
         << "\nratio == " << ratio;
}