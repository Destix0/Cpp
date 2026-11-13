#include <iostream>

#include <math.h>

using namespace std;

int main()
{
    double a,b,c;
    double D,x1,x2;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    D = b * b - 4.0 * a * c;

    if (D >= 0)
    {
        x1 = (-b + sqrt(D)) / (2.0 * a);
        x2 = (-b - sqrt(D)) / (2.0 * a);

        if (D > 0)
        {
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else
        {
            cout << "x1 = x2 = " << x1 << endl;
        }
    }
    else
    {
        cout << "No solution" << endl;
    }

    return 0;

}