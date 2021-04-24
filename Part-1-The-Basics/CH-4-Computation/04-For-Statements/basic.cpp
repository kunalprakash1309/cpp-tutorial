#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i<100; ++i) { // for i in the [0:100) range
        cout << i << '\t' << i*i << '\n';
        ++i; // what's going on here? It smells like an error!
    }
}