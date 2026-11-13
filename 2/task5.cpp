//Проверить, является ли введенным символ разделителем (пробелом, левой или правой фигурной скобкой).
#include <iostream>

using namespace std;

int main()
{
    char x;
    cout << "Enter a symbol: ";
    cin.get(x);

    if (x == ' ' or x == '{' or x == '}')
    {
        cout << "The symbol is a separator" << endl;
    }
    else
    {
        cout << "The symbol is not a separator" << endl;
    }
 
    return 0;
}