#include <iostream>
using namespace std;

int main()
{
    char i = 'a';
    while(i <= char('z')){
        cout << i << '\t' << int(i) << '\n';
        i = i+1;
    }
}