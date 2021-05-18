#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<double> distances;
    double sum = 0;
    for(double i; cin>>i;){
        distances.push_back(i);
        sum += i;
    }
    
    sort(distances.begin(), distances.end());

    cout << "The sum of all disatances : " << sum << '\n';
    cout << "Smallest distance : " << distances[0] << '\n';
    cout << "Largest distance : " << distances[distances.size()-1] << '\n';
    cout << "Mean distance : " << sum / distances.size() << '\n';
}