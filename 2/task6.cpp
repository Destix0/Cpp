//Мастям игральных карт присвоены порядковые номера: 1 — пики, 2 — трефы, 3 — бубны, 4 — червы. Достоинству карт, старших десятки,
//присвоены номера: 11 — валет, 12 — дама, 13 — король, 14 — туз. Даны два целых числа: N — достоинство (6 ≤ N ≤ 14) и M — масть карты
//(1 ≤ M ≤ 4). Вывести название соответствующей карты вида «шестерка бубен», «дама червей», «туз треф» и т. п..
#include <iostream>
using namespace std;
int main()
{
    int N,M;
    cout << "Enter N [6;14]: ";
    cin >> N;
    cout << "Enter M [1;4]: ";
    cin >> M;

    if (N >= 6 and N <= 14 and M >= 1 and M <= 4)
    {
        switch (N)
        {
            case 6 : cout << "Six "; break;
            case 7 : cout << "Seven "; break;
            case 8 : cout << "Eight "; break;
            case 9 : cout << "Nine "; break;
            case 10 : cout << "Ten "; break;
            case 11 : cout << "Jack "; break;
            case 12 : cout << "Queen "; break;
            case 13 : cout << "King "; break;
            case 14 : cout << "Ace "; break;
        }

        switch (M)
        {
            case 1 : cout << "Spades" << endl; break;
            case 2 : cout << "Clubs" << endl; break;
            case 3 : cout << "Diamonds" << endl; break;
            case 4 : cout << "Hearts" << endl; break;
        }
    }
    else
    {
        cout << "Error: wrong input" << endl;
    }

    return 0;
}