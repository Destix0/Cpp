// Напишите программу, которая по введенному четырехзначному числу вычисляет двузначное число,
// получающееся зачеркиванием у исходного числа цифр разрядов десятков и сотен.
#include <iostream>

using namespace std;

int main ()
{
    int x;
    cout << "Enter four-digit number: ";
    cin >> x;

    int t = x / 1000;
    int e = x % 10;
    int r = t * 10 + e;

    cout << "Result: " << r << endl;

    return 0;
}
