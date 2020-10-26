#include <iostream>
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double F, a, b, c, x;
    cout << "Введіть a: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;
    cout << "Введіть c: ";
    cin >> c;
    cout << "Введіть x: ";
    cin >> x;
    if (x < 1 && c != 0)
    {
        F = ((a * pow(x, 2)) / b) + (pow(b, 2) / c);
    }
    else if (x > 1 || c == 0)
    {
        F = (fabs(x - a) / (x - c));
    }
    else
    {
        F = (10 / pow(c, 2));
    }
    cout << "F = " << F << endl;
    system("pause");

    return 0;
}
