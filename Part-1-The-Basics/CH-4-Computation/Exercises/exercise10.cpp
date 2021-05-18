#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

vector<string> options = {"rock", "paper", "scissor"};

string generateOptions() {
    int i = -1;
    i = rand() % 3;
    return options[i];
}
int main()
{
    char user_option = ' ';
    cout << "Enter your option (r(Rock), p(Paper), s(Scissor)) or exit(Ctrl+Z)" << endl;
    while(cin >> user_option){
        string generatedOption = generateOptions();
        cout << "Computer gussed option " << generatedOption << endl;
        switch (user_option){
        case 'r':
        case 'R':
            cout << "You entered rock"<< endl;
            if (generatedOption == "scissor")
                cout << "You win"<<endl;
            else if(generatedOption == "paper")
                cout << "You loss" << endl;
            else if(generatedOption == "rock")
                cout << "Match Drawn" << endl;
            break;
        case 'p':
        case 'P':
            cout << "You entered paper"<< endl;
            if (generatedOption == "rock")
                cout << "You win"<<endl;
            else if(generatedOption == "scissor")
                cout << "You loss" << endl;
            else if(generatedOption == "paper")
                cout << "Match Drawn" << endl;
            break;
        case 's':
        case 'S':
            cout << "You entered scissor"<< endl;
            if (generatedOption == "paper")
                cout << "You win"<<endl;
            else if(generatedOption == "rock")
                cout << "You loss" << endl;
            else if(generatedOption == "scissor")
                cout << "Match Drawn" << endl;
            break;
        default:
            cout << "You entered Invalid input"<< endl;
            break;
        }
        cout << "Enter your option (r(Rock), p(Paper), s(Scissor)) or exit(Ctrl+Z)" << endl;
    }
}