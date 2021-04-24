#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string disliked = "kunal";

    vector<string> words;
    for(string word; cin >> word;)
        words.push_back(word);
    
    for (string s : words){
        if (s == "kunal")
            cout << "bleep\n";
        else
            cout << s << '\n';
    }
}