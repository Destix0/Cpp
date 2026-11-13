//Вывести наименьшее четное натуральное число, куб которого больше натурального числа n.

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

    int n_min = 2;

    while (n_min*n_min*n_min <= n)
    {
        n_min += 2;
    }

    cout <<  "m = " << n_min << endl;

    return 0;
}