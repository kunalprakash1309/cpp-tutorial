#include <iostream>
#include <vector>
using namespace std;

void fibonacci(int x, int y, int n, vector<int>& series)
{

    if (n < 1) cout << "Invalid input"; return;
    series.push_back(x);
    series.push_back(y);

    // int temp = 0;
    for(int i = 2; i <= n; i++){
        int z = series[i-1] + series[i-2];
        series.push_back(z);
    }
}

void series_print(vector<int>& series)
{
    cout << "size " << series.size()<< '\n';
    for(int i = 0; i < series.size(); i++){
        cout << series[i] << " --- ";
    }
}

int main()
{
    int x = 0;
    int y = 1;
    int n ;
    vector<int> series;
    cout << "How much element you want to print. \n";
    cin >> n;
    fibonacci(x, y, n, series);
    series_print(series);
    return 0;
}