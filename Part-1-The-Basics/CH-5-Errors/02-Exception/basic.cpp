#include <iostream>
using namespace std;

class Bad_area {};

int area(int length, int width)
{
    if (length<=0 || width<=0) throw Bad_area{};
    return length*width;
}

int main()
try{
    int x = 1;
    int y = 2;

    int area1 = area(x,y);
}catch(Bad_area) {
    cout << "Oops! bad arguments to area()\n";
}
