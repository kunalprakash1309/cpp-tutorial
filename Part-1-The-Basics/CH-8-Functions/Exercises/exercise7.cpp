#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_names(vector<string> series)
{
    cout << "(";
    for(int i = 0; i < series.size(); i++){
        cout << series[i];
        if (i < series.size()-1)
            cout << ", ";
    }
    cout << ")" << '\n';
}

void print_ages(vector<int> series)
{
    cout << "(";
    for(int i = 0; i < series.size(); i++){
        cout << series[i];
        if (i < series.size()-1)
            cout << ", ";
    }
    cout << ")" << '\n';
}

void print_pairs(vector<string>& names, vector<int>& ages)
{
    cout << "{";
    for(int i = 0; i < names.size(); i++){
        cout << "(" ;
        cout << names[i] << ", "<< ages[i];
        // if (i < names.size()-1)
        //     cout << "; ";
        cout << "); ";
    }
    cout << "}" << '\n';
}

int main()
{
    vector<string> names = {"Sanjay", "Kiran", "Kunal", "Anand", "Harsh"};
    vector<int> ages;
    cout << "Enter the age of respective person: " << '\n';
    for (int i = 0; i<names.size(); i++){
        int age;
        cout << "Age of " << names[i] << " : " ;
        cin >> age;
        ages.push_back(age);
    }
    // print_names(names);
    // print_ages(ages);

    vector<string> duplicate_name = names;
    vector<int> ordered_ages;
    sort(names.begin(), names.end());

    for (string name : names){
        for(int i = 0; i < duplicate_name.size(); i++){
            if(name == duplicate_name[i]) ordered_ages.push_back(ages[i]);
        }
    }

    // print_names(duplicate_name);
    // print_ages(ages);

    // print_names(names);
    //print_ages(ordered_ages);
    print_pairs(names, ordered_ages);
    return 0;
}