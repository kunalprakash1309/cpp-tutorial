#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the amount following with their currency(y(yen), e(euros), p(pound)) to be convert to dollars: \n";
    double amount = 0.0;
    char currency = ' ';

    cin >> amount >> currency;

    if (currency == 'y')
        cout << amount <<" yen == " << amount*0.0093 << " dollar";
    else if (currency == 'e')
        cout << amount <<" euros == " << amount*1.21 << " dollar";
    else if (currency == 'p')
        cout << amount <<" pounds == " << amount*1.31 << " dollar";
    else
        cout << "Oops!...Invalid input currency";
}