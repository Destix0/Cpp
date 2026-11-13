// Напишите программу, которая находит площадь трапеции по ее высоте и двум основаниям.
#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    double a;
    cout << "Enter leg a: ";
    cin >> a;

    double b;
    cout << "Enter leg b: ";
    cin >> b;

    double c = sqrt(pow(a,2.0) + pow(b,2.0));
    double S = a * b / 2.0;

    cout << "Hypotenuse = " << c << '\n' << " Area = " << S << endl;

    return 0;
}