#include <iostream>
#include <vector>
using namespace std;

void print(string& label, vector<int>& list)
{
    cout << label<<": ("<<list.size()<<") {";
    for (int i=0; i < list.size(); i++){
        cout << list[i];
        if(i < list.size()-1)
            cout << ", ";
    }
    cout << "}"<< "\n";
}
int main()
{
    string label = "list ";
    vector<int> list = {2, 4, 6, 9, 10, 3, 99};
    print(label, list);
    return 0;
}
