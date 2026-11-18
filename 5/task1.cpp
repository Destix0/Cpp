//Заполнить массив из 10 целых чисел с клавиатуры и вывести все его двузначные элементы. Определить количество двузначных элементов массива.

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const int ARRAY_SIZE = 10;
    int array[ARRAY_SIZE];

    cout << "Enter 10 integer elements of the array: " << '\n';

    for (int i = 0; i < ARRAY_SIZE; i++)
        if (!(cin >> array[i])) {
            cout << "Invalid input";
            return 1;
        }

    int counter_two_digit_element_of_array = 0;

    bool printed = false;

    for (int i = 0; i < ARRAY_SIZE; i++)
        if (abs(array[i]) / 10 >= 1 and abs(array[i]) / 10 <= 9) {
            counter_two_digit_element_of_array++;
            if (!printed) {
                cout << "Two-digit elements of array: ";
                printed = true;
            }

            cout << array[i] << " ";
        }

    if (counter_two_digit_element_of_array > 0) {
        cout << '\n' << "Number of two-digit elements in the array: " << counter_two_digit_element_of_array;
    } else {
        cout << '\n' << "No two-digit elements found in the array";
    }

    return 0;
}
