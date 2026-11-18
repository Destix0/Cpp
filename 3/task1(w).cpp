//Начав тренировки, лыжник в первый день пробежал L км. Каждый следующий день он увеличивал длину
//пробега на p % от пробега предыдущего дня. Определить, в какой день суммарный пробег за все дни
//превысит D км. Получить ответ для L = 10 км, p = 10%, D = 100 км.

#include <iostream>

using namespace std;

int main() {
    double distance, percentage;
    int last_distance;

    cout << "Enter distance on first day: ";
    cin >> distance;

    cout << "Enter %: ";
    cin >> percentage;

    cout << "Enter distance on last day: ";
    cin >> last_distance;

    double total_distance = 0;
    int day = 1;

    while (total_distance <= last_distance) {
        day++;
        distance += distance * percentage;
        total_distance += distance;
    }

    cout << "Answer: " << day << endl;

    return 0;
}
