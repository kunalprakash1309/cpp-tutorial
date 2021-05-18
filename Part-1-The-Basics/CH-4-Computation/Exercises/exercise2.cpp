#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers;
    int size = 0;
    for (int i; cin >> i;)
        numbers.push_back(i);
    
    sort(numbers.begin(), numbers.end());

    size = numbers.size();
    cout << "size: " << size << '\n';
    if (size%2 == 0)
        cout << "Median : " << (numbers[size/2] + numbers[(size/2)-1])/2.0 << '\n';
    else
        cout << "Median : " << numbers[(size-1)/2] << '\n';
}