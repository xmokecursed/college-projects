// calc

#include <iostream>
using namespace std;

int main()
{
    float x, y;
    char f;

    cout << "Enter 1st number: ";
    cin >> x;

    cout << "Enter 2nd number: ";
    cin >> y;

    cout << "Enter function (+, -, *, /): ";
    cin >> f;

    if (f == '+')
    {
        cout << "Answer: " << x + y;
    }
    else if (f == '-')
    {
        cout << "Answer: " << x - y;
    }
    else if (f == '*')
    {
        cout << "Answer: " << x * y;
    }
    else if (f == '/')
    {
        if (y != 0)
            cout << "Answer: " << x / y;
        else
            cout << "Cannot divide by zero";
    }
    else
    {
        cout << "Invalid function";
    }

    return 0;
}
