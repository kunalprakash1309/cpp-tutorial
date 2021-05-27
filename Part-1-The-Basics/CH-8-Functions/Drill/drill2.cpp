#include <iostream>
using namespace std;

void swap_v(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_r(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// void swap_cr(const int& a, const int& b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

int main()
{
    double x = 7.7;
    double y = 9.9;
    cout << "(x, y) == (" << x << ", " << y << ")" << '\n';
    swap_v(x, y);
    cout << "(x, y) == (" << x << ", " << y << ")" << '\n';
    return 0;
}