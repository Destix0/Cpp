//Определить, делится ли на 3 число делителей введено натурального числа n.

#include <iostream>

using namespace std;

int main ()
{
    int n;
    cout << "n = ";

    if (!(cin >> n) or n <= 0)
    {
        cout << "n is not natural" << endl;
        return 1;
    }

    int divisor = 0;
    int n2 = 1;

    while (n2 <= n)
    {
        if (n % n2 == 0)
            divisor++;
        n2++;
    }

    if (divisor % 3 == 0)
        cout << "The number of divisors is divisible by 3 " << endl;
    else
        cout << "The number of divisors is not divisible by 3 " << endl;

    return 0;
}