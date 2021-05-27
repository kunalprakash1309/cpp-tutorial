#include <iostream>
#include <vector>
using namespace std;

vector<string> words;

void take_input(vector<string>& words)
{
    string word = " ";
    while(cin>>word){
        if (word == "q"){
            break;
        }
        words.push_back(word);
    }
}

vector<int> get_lengths(vector<string>& words)
{
    vector<int> lengths;
    for (string word: words){
        lengths.push_back(word.size());
    }
    return lengths;
}

void print_pairs(vector<string>& names, vector<int>& ages)
{
    cout << "{";
    for(int i = 0; i < names.size(); i++){
        cout << "(" ;
        cout << names[i] << ", "<< ages[i];
        cout << "); ";
    }
    cout << "}" << '\n';
}

int main()
{
    cout << "Provide words (and press 'q' to exit) : " << '\n';
    take_input(words);

    vector<int> lengths = get_lengths(words);
    print_pairs(words, lengths);
    return 0;
}