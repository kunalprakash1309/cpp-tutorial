#include <iostream>
using namespace std;


inline void keep_window_open()
{
	cin.clear();
	cout << "Please enter a character to exit\n";
	char ch;
	cin >> ch;
	return;
}

inline void simple_error(string s)
{
    cerr << "error: " << s << '\n';
    keep_window_open();
    exit(1);
}

int main()
{
    cout << "Enter the name of the person you want to write to: ";
    string first_name;
    cin >> first_name;
    cout << "\nEnter the name of another friend: ";
    string friend_name;
    cin >> friend_name;
    char friend_sex = '0';
    cout << "\nEnter 'm' if the friend is male and 'f' if the friend is female: ";
    cin >> friend_sex;
    int age;
    cout << "\nEnter your recipient age: ";
    cin >> age;

    cout << "\nDear, "<< first_name;
    cout << "\n\tHow are you? I am fine. I miss you.";
    cout << "Have you seen "<<friend_name<<" lately? ";

    if (friend_sex == 'm')
        cout << "If you see "<<friend_name<< " please ask him to call me.";
    if (friend_sex == 'f')
        cout << "If you see "<<friend_name<<" please ask her to call me.";

    if (age <= 0 || age > 110)
        simple_error("You are kidding!");
    else 
        cout << " I hear you just had a birthday and you are "<< age << " years old. ";

    if (age < 12)
        cout << "Next year you will be "<< age + 1;
    else if (age = 17)
        cout << "Next year you will be able to vote";
    else if (age > 70)
        cout << "I hope you are enjoying retirement";
    
    cout << "\n\n Yours sincerly Kunal(lucky)";
    return 0;
}
