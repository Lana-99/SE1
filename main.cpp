#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int x, y;

    cout << "Введите значение Х:"; cin >> x;
    cout << "Введите значение Y:"; cin >> y;
    cout << "Сумма: " << x+y;
    return 0;
}
