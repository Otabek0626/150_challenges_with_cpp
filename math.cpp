#include <iostream>
#include <cmath>

using namespace std;

double roundto(double num, double x)
{
    int i = 1;
    double y = 1;
    while (i < x+1)
    {
        y=y*10;
        i++;
    }

    double result = ((round(num*y))/y);
    return result;
    return 0;
}

int challenges027()
{
    double num;
    cout << "Enter a number with lots of decimal places... ";
    cin >> num;
    cout << num*2 << endl;
    return 0;
}

int challenges028()
{
    double num;
    cout << "Enter a number with lots of decimal places... ";
    cin >> num;
    cout << round(num*2) << endl;
    return 0;
}

int challenges029()
{
    int num;
    cout << "Enter a number over 500... ";
    cin >> num;
    double answer = sqrt(num);
    cout << roundto(answer, 2) << endl;
    return 0;
}

int challenges030()
{
    double pi = 3.1415926535;
    cout << roundto(pi, 5) << endl;
    return 0;
}

int challenges031()
{
    cout << "Enter the radius... ";
    int radius;
    cin >> radius;
    double pi = 3.1415926535;
    double area = pi*radius*radius;
    cout << area << endl;
}

int challenges032()
{
    cout << "Enter the radius... ";
    int radius;
    cin >> radius;
    double pi = 3.1415926535;
    double area = pi*radius*radius;
    cout << "Enter depth... ";
    double depth;
    cin >> depth;
    double volume = area*depth;
    cout << volume << endl;
}

int challenges033()
{
    cout << "Enter a number... ";
    int num1;
    cin >> num1;
    cout << "Enter another number... ";
    int num2;
    cin >> num2;
    int ans1 = num1%num2;
    int ans2 = (num1-ans1)/num2;
    cout << num1 << " divided by " << num2 << " is " << ans2 << " with " << ans1 << " remaining.";
    return 0;
}

int challenges034()
{
    cout << "1) Square \n2) Triangle \n\nSelect one menu... ";
    int menuselection;
    cin >> menuselection;
    if (menuselection == 1)
    {
        int side;
        cout << "Enter the length of the site... ";
        cin >> side;
        double area = side*side;
        cout << "The area is " << area << endl;
    }
    else if(menuselection==2)
    {
        int base, height;
        cout << "Enter the length of the base... ";
        cin >> base;
        cout << "Enter the length of the height... ";
        cin >> height;
        double area = (base*height)/2;
        cout << "The area is " << area << endl;
    }
    else
    {
        cout << "Incorrect option selected" << endl;
    }
    return 0;
}


int main()
{
    challenges027();
    cout << endl;
    challenges028();
    cout << endl;
    challenges029();
    cout << endl;
    challenges030();
    cout << endl;
    challenges031();
    cout << endl;
    challenges032();
    cout << endl;
    challenges033();
    cout << endl;
    challenges034();
    cout << endl;
    return 0;
}
