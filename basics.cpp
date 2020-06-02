#include <iostream>

using namespace std;

int challenges_001()
{
    string FirstName;
    cout << "Enter your first name... ";
    cin >> FirstName;
    cout << "Hello " << FirstName << endl;
    return 0;
}

int challenges_002()
{
    string FirstName, SurName;
    cout << "Enter your first name... ";
    cin >> FirstName;
    cout << "Enter your surname... ";
    cin >> SurName;
    cout << "Hello " << FirstName << " " << SurName << endl;
    return 0;
}

int challenges_003()
{
    cout << "What do you call a bear no teeth?\nA gummy bear!" << endl;
    return 0;
}

int challenges_004()
{
    int num1, num2, answer;
    cout << "Enter first number... ";
    cin >> num1;
    cout << "Enter second number... ";
    cin >> num2;
    answer = num1+num2;
    cout << "The total is " << answer << endl;
    return 0;
}

int challenges_005()
{
    int num1, num2, num3, answer;
    cout << "Enter first number... ";
    cin >> num1;
    cout << "Enter second number... ";
    cin >> num2;
    cout << "Enter third number... ";
    cin >> num3;
    answer = (num1+num2)*num3;
    cout << "The total is " << answer << endl;
    return 0;
}

int challenges_006()
{
    int startNum, eatenNum, leftNum;
    cout << "Enter the number of slices of pizza you started with: ";
    cin >> startNum;
    cout << "How many slices have you eaten? ";
    cin >> eatenNum;
    leftNum = startNum - eatenNum;
    cout << "You have " << leftNum << " slices remaining" << endl;
    return 0;
}

int challenges_007()
{
    string name;
    int age, newAge;
    cout << "What is your name? ";
    cin >> name;
    cout << "How old are you? ";
    cin >> age;
    newAge = ++age;
    cout << name << " next birthday you will be " << newAge << endl;
    return 0;
}

int challenges_008()
{
    float bill;
    int people;
    float each;
    cout << "What is the total cost of the bill? ";
    cin >> bill;
    cout << "How many people are there? ";
    cin >> people;
    each = bill/people;
    cout << "Each person should pay $" << each << endl;
    return 0;
}

int challenges_009()
{
    int days, hours, minutes, seconds;
    cout << "Enter the number of days... ";
    cin >> days;
    hours = 24*days;
    minutes = 60*hours;
    seconds = 60*minutes;
    cout << "In " << days << " there are...\n" << hours << " hours\n" << minutes << " minutes\n" << seconds << " seconds" << endl;
    return 0;
}

int challenges_010()
{
    float kilogram, pounds;
    cout << "Enter your weight in kilogram... ";
    cin >> kilogram;
    pounds = 2.204*kilogram;
    cout << "That is " << pounds << " pounds"<< endl;
    return 0;
}

int challenges_011()
{
    int larger, smaller, answer;
    cout << "Enter a number over 100: ";
    cin >> larger;
    cout << "Enter a number under 10: ";
    cin  >> smaller;
    answer = (larger-(larger%smaller))/smaller;
    cout << smaller << " goes into " << larger << " " << answer << " times" << endl;
    return 0;
}

int main()
{
    challenges_001();
    cout << endl;
    challenges_002();
    cout << endl;
    challenges_003();
    cout << endl;
    challenges_004();
    cout << endl;
    challenges_005();
    cout << endl;
    challenges_006();
    cout << endl;
    challenges_007();
    cout << endl;
    challenges_008();
    cout << endl;
    challenges_009();
    cout << endl;
    challenges_010();
    cout << endl;
    challenges_011();
    cout << endl;
    return 0;
}


