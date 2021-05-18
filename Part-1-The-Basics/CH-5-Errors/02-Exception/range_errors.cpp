#include <iostream>
#include <vector>
using namespace std;

int main()
try {
    vector<int> v; // a vector of ints
    for (int x; cin>>x; )
    v.push_back(x); // set values
    for (int i = 0; i<=5; ++i) // print values
    cout << "v[" << i <<"] == " << v[i] << '\n';
}catch (out_of_range) {
    cerr << "Oops! Range error\n";
    return 1;
}