// Для введенного четырехзначного числа определите произведение его цифр.
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter four-digit number: ";
    cin >> x;

    int e = x % 10;
    int d = (x / 10) % 10;
    int s = (x / 100) % 10;
    int t = x / 1000;
    int p = e * d * s * t;

    cout << "Product of numbers = " << p << endl;

    return 0;
}