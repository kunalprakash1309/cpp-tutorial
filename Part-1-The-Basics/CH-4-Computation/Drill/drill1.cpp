#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<double> numbers;
    vector<double> meters;

    double word = 0;
    double max = 0;
    double min = 0;
    char unit = ' ';
    double sum = 0;
    for(int i = 0; cin >> word >> unit;i++){
        numbers.push_back(word);
        sum += word;
        if (i == 0){
            max = word;
            min = word;
        }
        if (word > max){
            cout << "The largest so far\n";
            max = word;
        }
        if (word < min){
            cout << "The smallest so far\n";
            min = word;
        }

        switch(unit){
            case 'm':
                cout << word << "m == " << word*100 << "cm\n";
                meters.push_back(word);
            case 'i':
                cout << word << "in == " << word*2.54 << "cm\n";
                break;
            default :
                cout << "Invalid input data\n";
        }

        cout << "word = " << word << '\n';
        cout << "unit = " << unit << '\n';
    }
    
    sort(numbers.begin(), numbers.end());
    if (numbers[0]==numbers[1])
        cout << "The numbers are equal";
    else {
        cout << "The smaller value is: " << min <<'\n';
        cout << "The larger value is: " << max <<'\n';
        cout << "The number of value entered is: " << numbers.size() << '\n';
        cout << "The total value entered is: " << sum << '\n';
        if((numbers[1]-numbers[0]) < (1.0/100))
            cout << "The numbers are almost equal\n";
    }

    sort(meters.begin(), meters.end());
    for (int i : meters)
        cout << i << '\n';
}