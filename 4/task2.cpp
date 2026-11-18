//Найти количество чисел от 1 до n, кратных 4.

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter natural number: ";

    if (!(cin >> n) or n < 1) {
        cout << "Invalid input" << endl;
        return 1;
    }

    int k = 0;

    if (n >= 1) {
        for (int i = 1; i <= n; i++) {
            if (i % 4 != 0)
                continue;

            k += 1;
        }
    }

    cout << "Amount of numbers: " << k << endl;

    return 0;
}
