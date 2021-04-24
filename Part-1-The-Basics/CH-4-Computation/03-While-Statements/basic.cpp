#include <iostream>
using namespace std;

int main()
{
    int i = 0; // initialization
    while(i<100){ // condition
        cout << i << '\t' << i*i << '\n';
        ++i; // change the condition
    }
}