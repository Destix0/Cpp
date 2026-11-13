//Программа вводит целое число из отрезка [0; 999]. Результат его работы вывод фразы, характеризующей данное число:
//«четное однозначное число», «нечетное однозначное число» «четное двузначное число», «нечетное двузначное число»,
//«четное трехзначное число», «нечетное трехзначное число» (выводить фразы на экран можно на английском или транслитом).
#include <iostream>

using namespace std;

int main ()
{
    int x;
    cout << "Enter integer number in [0;999]: ";
    if (!(cin >> x))
    {
        cout << "The number was entered incorrectly" << endl;
        return 1;
    }

    if (!(x >= 0 and x <= 999))
    {
        cout << "Enter number not in [0;999]" << endl;
        return 1;
    }
    
    if (x % 2 == 0)
    {
        cout << "Even " << endl;
    }
    else
    {
        cout << "Odd " << endl;
    }

    if (x < 10)
    {
       cout << "one-digit number" << endl;
    }
    else if (x < 100)
    {
        cout << "two-digit number" << endl;
    }
    else
    {
        cout << "three-digit number" << endl;
    }

    return 0;
}

