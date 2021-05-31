#include <iostream>
using namespace std;

enum class Month {
    jan=1, feb,
};

class Date {
    public: 
        Date(int y, Month m, int d);
    private:
        int y;
        Month m;
        int d;
}; 

int main()
{
    Date dx1 (1998, Month::feb, 3);
    return 0;
}