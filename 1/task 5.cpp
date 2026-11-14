//Напишите программу, которая меняет значения двух переменных друг с другом,
// используя при этом третью переменную.
#include <iostream>

using namespace std;

int main() {
    double a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Revers numbers: " << a << " " << b << endl;

    return 0;
}
