//Написать программу, которая находит сумму косинусов всех чисел от 1 до введенного n.

#include <math.h>

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter natural number: ";

    if (!(cin >> n) or n < 1) {
        cout << "Invalid input" << endl;
        return 1;
    }

    double sum_cos = 0.0;

    if (n >= 1) {
        for (int i = 1; i <= n; i++)
            sum_cos += cos(i);
    }

    cout << "Sum of cosines = " << sum_cos << endl;

    return 0;
}
