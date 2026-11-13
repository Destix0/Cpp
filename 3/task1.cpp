//Начав тренировки, лыжник в первый день пробежал L км. Каждый следующий день он увеличивал длину
//пробега на p % от пробега предыдущего дня. Определить, в какой день суммарный пробег за все дни
//превысит D км. Получить ответ для L = 10 км, p = 10%, D = 100 км.

#include <iostream>

using namespace std;

int main()
{
    double L = 10;
    double p = 0.1;
    int D = 100;
    int day = 1;
    double sumL = 0;

    while (sumL <= D)
    {
        sumL += L;
        L += L * p;

        if (sumL > D)
        {
            cout << "Answer: " << day << endl; break;
        }

        day ++;
    }

    return 0;
}
