#include <iostream>
#include <algorithm>

using namespace std;

int challenge_020()
{
    string name;
    int length;
    cout << "Enter your name... ";
    cin >> name;
    length = name.length();
    cout << length;
    return 0;
}

int challenge_021()
{
    string FirstName, SurName, name;
    int length;
    cout << "Enter your first name... ";
    cin >> FirstName;
    cout << "Enter your surname... ";
    cin >> SurName;
    name = FirstName + " " + SurName;
    length = name.length();
    cout << name << " = " << length;
    return 0;
}

int challenge_022()
{
    string FirstName, SurName, name;
    cout << "Enter your first name in lower case... ";
    cin >> FirstName;
    cout << "Enter your surname in lower case... ";
    cin >> SurName;
    FirstName[0] = toupper(FirstName[0]);
    SurName[0] = toupper(SurName[0]);
    name = FirstName + " " + SurName;
    cout << name;
    return 0;
}

int challenge_023()
{
    string phrase;
    int Length, Start, End, Part;
    cout << "Enter any text... ";
    getline(cin, phrase);
    Length = phrase.length();
    cout << "This has " << Length << " letters in it" << endl;
    cout << "Enter a starting number... ";
    cin >> Start;
    cout << "Enter an ending number... ";
    cin >> End;
    string str2 = phrase.substr (Start-1,End+Start-1);
    cout << str2 << endl;
    return 0;
}

int challenge_024()
{
    string str;
    cout << "Enter an any word... ";
    getline(cin, str);
    transform(str.begin(), str.end(),str.begin(), ::toupper);
    cout << str << endl;
    return 0;
}

int challenge_025()
{
    string firstname;
    int length;
    cout << "Enter your first name... ";
    cin >> firstname;
    length = firstname.length();
    if (length<=5)
    {
        string surname, fullname;
        cout << "Enter your surname... ";
        cin >> surname;
        fullname = surname+firstname;
        transform(fullname.begin(), fullname.end(), fullname.begin(), ::toupper);
        cout << fullname << endl;
    }
    else
    {
        transform(firstname.begin(), firstname.end(), firstname.begin(), ::tolower);
        cout << firstname;
    }
    return 0;
}

int challenge_026()
{
    cout << "Enter a word... ";
    string word;
    cin >> word;
    string first = word.substr(0,1);
    int length = word.length();
    string rest = word.substr (1, length);
    if (first != "a" && first != "e" && first != "i" && first != "o" && first != "u")
    {
        string newword = rest+first+"ay";
        cout << newword << endl;
    }
    else
    {
        string newword = word+"way";
        cout << newword << endl;
    }
    return 0;
}


int main()
{
    challenge_020();
    cout << endl;
    challenge_021();
    cout << endl;
    challenge_022();
    cout << endl;
    challenge_023();
    cout << endl;
    challenge_024();
    cout << endl;
    challenge_025();
    cout << endl;
    challenge_026();
    cout << endl;
    return 0;
}
