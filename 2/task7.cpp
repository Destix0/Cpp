//Написать программу, вычисляющую дату, следующую за данной. Дата задается тремя числами d, m, y,
//обозначающими соответственно день, месяц и год.
#include <iostream>
using namespace std;
int main ()
{
    int d,m,y;
    cout << "Enter date (Day): ";
    if (cin >> d and cin.peek() == '\n' and d >=1 and d <=31)
    {
        cout << "Enter date (Mouth): ";
        if (cin >> m and cin.peek() == '\n' and m >= 1 and m <= 12)
        {
            cout << "Enter date (Year): ";
            if (cin >> y and cin.peek() == '\n' and y >= 1 and y <= 100000)
            {
                if (m < 10)
                {
                    cout << "Your date: " << d << ".0" << m << "." << y << endl;
                }
                else
                {
                    cout << "Your date: " << d << "." << m << "." << y << endl;
                }
                if (m == 1 and m == 3 and m == 5 and m == 7 and m == 8 and m == 10 and m == 12)
                {
                    switch (d)
                    {
                        case 31:
                            m += 1;
                            d = 1;
                    }
                }
                if (m == 4 and m == 6 and m == 9 and m == 11)
                {
                    if (d == 30)
                    {
                        m += 1;
                        d = 1;
                    }
                }
                if (m == 2)
                {
                    if (y % 4 == 0 and y % 100 == 0 and y % 400 == 0)
                    {
                        switch (d)
                        {
                            case 29:
                                m += 1;
                                d = 1;
                        }
                    }
                    else
                    {
                        switch (d)
                        {
                            case 28:
                                m += 1;
                                d = 1;
                        }
                    }
                }
                switch (m)
                {
                    case 12:
                        y += 1;
                        m = 1;
                }
                if (m < 10)
                {
                    cout << "Your date: " << d << ".0" << m << "." << y << endl;
                }
                else
                {
                    cout << "Your date: " << d << "." << m << "." << y << endl;
                }
            }
            else
            {
                cout << "incorrect date" << endl;
            }
        }
        else
        {
            cout << "incorrect date" << endl;
        }
    }
    else
    {
        cout << "incorrect date" << endl;
    }

    return 0;
}