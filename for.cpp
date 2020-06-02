#include <iostream>

using namespace std;

int challenge035()
{
    string name;
    cout << "Enter your name... ";
    cin >> name;
    for (int i=0; i<3; i++)
    {
        cout << name << endl;
    }
    return 0;
}

int challenge036()
{
    string name;
    int x;
    cout << "Enter your name... ";
    cin >> name;
    cout << "How many times... ";
    cin >> x;
    for (int i=0; i<x; i++)
    {
        cout << name << endl;
    }
    return 0;
}

int challenge037()
{
    string str;
    int x;
    cout << "Enter any word... ";
    for (size_t i = 0; i != str.size(); ++i) {
        std::cout << str[i];
    }
}

int main()
{
    challenge037();
    return 0;
}
