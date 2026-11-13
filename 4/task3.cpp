//Найти наибольшее простое число в диапазоне от 1 до n.

#include <iostream>

using namespace std;

int main ()
{
    int n;
    cout << "Enter natural number > 1: ";

    if (!(cin >> n) or n < 2)
    {
        cout << "Invalid input" << endl;
        return 1;
    }

    for (int i = n; i >= 2; i--)
    {
        int divisor = 0;
        int i2 = i;

        while (i2 <= i and i2 >= 2)
        {
            if (i % i2 == 0)
                divisor++;

            i2--;
        }

        if (divisor > 1)
        {
            continue;
        }

        cout << "Maximum perm number = " << i << endl; break;
    }

    return 0;
}
