#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> names = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int number = 0;

    cout << "Enter your number between 0-9 (included) : ";
    cin >> number;

    cout << names[number] << '\n';

    // switch(number){
    //     case 0:
    //         cout << names[0] << '\n';
    //         break;
    //     case 1:
    //         cout << names[1] << '\n';
    //         break;
    //     case 2:
    //         cout << names[2] << '\n';
    //         break;
    //     case 3:
    //         cout << names[3] << '\n';
    //         break;
    //     case 4:
    //         cout << names[4] << '\n';
    //         break;
    //     case 5:
    //         cout << names[5] << '\n';
    //         break;
    //     case 6:
    //         cout << names[6] << '\n';
    //         break;
    //     case 7:
    //         cout << names[7] << '\n';
    //         break;
    //     case 8:
    //         cout << names[8] << '\n';
    //         break;
    //     case 9:
    //         cout << names[9] << '\n';
    //         break;
    //     default:
    //         cout << "Wrong input";
    // }
}   