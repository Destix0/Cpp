//Найти наибольшую цифру в записи введенного натурального числа.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n = ";

    if (!(cin >> n) or n <= 0)
    {
        cout << "n is not natural" << endl;
        return 1;
    }

    int max_digit = 0;

    while (n != 0)
    {
        int digit = n % 10;

        if (digit > max_digit)
            max_digit = digit;

        n /= 10;
    }

    cout << "The maximum digit = " << max_digit << endl;

    return 0;
}