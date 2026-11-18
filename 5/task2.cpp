//Заполнить массив из 10 элементов случайными числами из диапазона [10, 99], вывести его на экран и определить количество элементов, равных максимальному.

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const int ARRAY_SIZE = 10;
    int array[ARRAY_SIZE];

    srand(time(NULL));

    int max_element_of_array = 0;
    int counter_element_equal_max = 0;

    bool printed = false;

    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = rand() % (99 - 10 + 1) + 10;

        if (!printed) {
            cout << "Number elements of array: ";
            printed = true;
        }

        cout << array[i] << " ";
    }

    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (array[i] > max_element_of_array)
            max_element_of_array = array[i];
    }

    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (array[i] == max_element_of_array) {
            counter_element_equal_max++;
        }
    }

    cout << '\n' << "The number of array elements equal to the maximum : " << counter_element_equal_max;

    return 0;
}
