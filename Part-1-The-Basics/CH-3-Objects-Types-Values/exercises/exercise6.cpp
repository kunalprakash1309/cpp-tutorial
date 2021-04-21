#include <iostream>
using namespace std;

int main() 
{
    int a = 0;
    int b = 0;
    int c = 0;
    int temp = 0;
    cout << "Provide three integers: ";
    cin >> a >> b >> c;

    for (int i = 0; i<2; i++){
        if (a >= b){
            temp = a;
            a = b;
            b = temp;
        }
        if (b >= c)
        {
            temp = b;
            b = c;
            c = temp;
        }
    }
    cout << a <<", "<< b <<", "<< c;
}