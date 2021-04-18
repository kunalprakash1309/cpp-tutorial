#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter your name and age\n";
    string name;
    int age;
    cin >> name >> age;
    cout << "Your name "<< name << " and age " << age *12 <<" months";
}