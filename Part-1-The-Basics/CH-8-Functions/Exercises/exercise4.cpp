#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 1;
    int c = a+b;
    for(;;){
        cout << c << '\n';
        a = b;
        b = c;
        c = a+b;
        if (c < 0) break;
    }
    return 0;
}