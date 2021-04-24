#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    vector<string> words;
    for(string temp; cin>>temp;)
        words.push_back(temp);
    cout << "Number of words: " << words.size() << '\n';

    sort(words.begin(), words.end());

    for (int i = 0; i<words.size(); i++)
        if (i==0 || words[i-1]!=words[i]) // i== 0 is only for printing the first vector value
            cout << words[i] << '\n';

}