//Дано трехзначное натуральное число. Определить, есть ли у него одинаковые цифры.
#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a three-digit natural number: ";

    if (!(cin >> number ))
    {
        cout << "The number was entered incorrectly" << endl;
        return 1;
    }

    if (number < 100 or number > 999)
    {
        cout << "The number was entered incorrectly" << endl;
        return 1;
    }

    int e = number % 10;
    int d = (number / 10) % 10;
    int s = number / 100;

    if (s == d or s == e or d == e)
    {
        cout << "There are identical digits" << endl;
    }
    else
    {
        cout << "There are no identical digits" << endl;
    }

    return 0;
}