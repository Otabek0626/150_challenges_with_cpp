#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int challenge_012()
{
    int num1, num2;
    cout << "Enter first number... ";
    cin >> num1;
    cout << "Enter second number... ";
    cin >> num2;
    if (num1>num2)
    {
        cout << num2 << "   " << num1;
    }
    else
    {
        cout << num1 << "   " << num2;
    }
    return 0;
}

int challenge_013()
{
    int num;
    cout << "Enter a number under 20... ";
    cin >> num;
    if (num>20)
    {
        cout << "Too high";
    }
    else
    {
        cout << "Thank you";
    }
    return 0;
}

int challenge_014()
{
    int num;
    cout << "Enter a number between 10 and 20(inclusive)... ";
    cin >> num;
    if (num>=10 and num<=20)
    {
        cout << "Thank you!";
    }
    else
    {
        cout << "Incorrect answer!";
    }
    return 0;
}

int challenge_015()
{
    string colour;
    cout << "What is your favourite colour? ";
    cin >> colour;
    if (colour=="red" or colour=="Red" or colour=="RED")
    {
        cout << "I like red too!";
    }
    else
    {
        cout << "I don't like " << colour;
    }
    return 0;
}

int challenge_016()
{
    string raining, windy;
    cout << "Is it raining? ";
    cin >> raining;
    transform(raining.begin(), raining.end(), raining.begin(), ::tolower);
    if (raining == "yes")
    {
        cout << "Is it windy? ";
        cin >> windy;
        transform(windy.begin(), windy.end(), windy.begin(), ::tolower);
        if (windy == "yes")
        {
            cout << "It is too windy for an umbrella!";
        }
        else
        {
            cout << "Take an umbrella!";
        }
    }
    else
    {
        cout << "Enjoy your day!";
    }
    return 0;
}

int challenge_017()
{
    int age;
    cout << "Enter your age... ";
    cin >> age;
    if (age>=18)
    {
        cout << "You can vote!";
    }
    else if (age==17)
    {
        cout << "You can learn driving!";
    }
    else if (age==16)
    {
        cout << "You can buy a lottery ticket!";
    }
    else
    {
        cout << "You can go Trick-orTreating";
    }
    return 0;
}

int challenge_018()
{
    int num;
    cout << "Enter a number... ";
    cin >> num;

    if (num<10)
    {
        cout << "Too low";
    }
    else if (num>20)
    {
        cout << "Too high";
    }
    else
    {
        cout << "correct";
    }
    return 0;
}

int challenge_019()
{
    int num;
    cout << "Enter a number among 1, 2 or 3... ";
    cin >> num;
    switch (num)
    {
        case 1:
            cout << "Thank you";
            break;
        case 2:
            cout << "Well done";
            break;
        case 3:
            cout << "Correct";
            break;
        default:
            cout << "Error message";
            break;
    }
    return 0;
}

int main()
{
    /*challenge_012();
    cout << endl;
    challenge_013();
    cout << endl;
    challenge_014();
    cout << endl;
    challenge_015();
    cout << endl;
    challenge_016();
    cout << endl;
    challenge_017();
    cout << endl;
    challenge_018();
    cout << endl;*/
    challenge_019();
    cout << endl;
    return 0;
}
