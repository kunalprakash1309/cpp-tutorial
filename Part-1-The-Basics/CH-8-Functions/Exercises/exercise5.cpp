#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> series)
{
    cout << "(";
    for(int i = 0; i < series.size(); i++){
        cout << series[i];
        if (i < series.size()-1)
            cout << ", ";
    }
    cout << ")" << '\n';
}

// long method

// void reverse(vector<int> series)
// {
//     int temp = 0;
//     for (int i = 0; i< (series.size()-1)/2; i++){
//         temp = series[i];
//         series[i] = series[series.size()-1-i];
//         series[series.size()-1-i] = temp;
//     }
//     print_vector(series);
// }

void reverse1(vector<int>& series)
{
    vector<int> new_series;
    for(int i = series.size()-1; i>=0; i--){
        new_series.push_back(series[i]);
    }
    print_vector(new_series);
}

void reverse2(vector<int>& series)
{
    for(int i = 0; i <= (series.size()-1)/2; i++){
        swap(series[i], series[series.size()-1-i]);
    }
    print_vector(series);
}

int main()
{
    vector<int> series = {1, 3, 5, 7, 9};
    reverse1(series);
    print_vector(series);
    reverse2(series);
    print_vector(series);
    return 0;
}