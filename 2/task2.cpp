//Дано трехзначное число, определить, делится ли на 7 его сумма цифр.
#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter three-digit integer number: ";

    if (!(cin >> number ))
    {
        cout << "The number was entered incorrectly" << endl;
        return 1;
    }

    if (!(number >= 100 and number <= 999))
    {
        cout << "Enter number not three-digit" << endl;
        return 1;
    }

    int e = number % 10;
    int d = (number / 10) % 10;
    int s = number / 100;
    int sum = s + d + e;

    if (sum % 7 == 0)
    {
        cout << "The sum of the digits is divisible by 7" << endl;
    }
    else
    {
        cout << "The sum of the digits is not divisible by 7" << endl;
    }
    return 0;
}





