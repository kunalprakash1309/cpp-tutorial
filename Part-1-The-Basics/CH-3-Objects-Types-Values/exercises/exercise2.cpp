#include <iostream>
using namespace std;

int main() 
{
    cout << "Enter amount of miles you want to convert to kilometers: ";
    double miles;
    cin >> miles;
    cout << "There are " << 1.609*miles << " to the " << miles << " miles.";
}