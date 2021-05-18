#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    vector<double> desired_amount = {1000, 1000000, 1000000000};
    int nSquare = 1;
    double nRiceOnCurrSqr = 1;
    double totalRice = 1;

    for(int i : desired_amount){
        while (i > totalRice){
            cout << "sqauare number " << nSquare << endl;
            cout << "Rice on current square " << nRiceOnCurrSqr << endl;
            cout << "Total rice " << totalRice << endl;
            cout << "Desired Amout = " << i << endl;

            cout << "------------------------" << endl;

            nRiceOnCurrSqr *= 2;
            totalRice += nRiceOnCurrSqr;
            nSquare++;
        }
        nSquare = 1;
        nRiceOnCurrSqr = 1;
        totalRice = 1;

        cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
    }
}