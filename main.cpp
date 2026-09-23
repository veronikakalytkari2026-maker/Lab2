#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double alpha; // вхідний параметр
    double z1;    // результат обчислення першої формули
    double z2;    // результат обчислення другої формули

    const double pi = 4 * atan(1.0);

    cout << "alpha = ";
    cin >> alpha;

    z1 = sin(pi / 2 + 3 * alpha) /
         (1 - sin(3 * alpha - pi));

    z2 = 1 / tan(5 * pi / 4 + 3 * alpha / 2);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "Зміна в гілці branch_02" << endl;
    cout << "z2 = " << z2 << endl;
    cout << "Локальна зміна" << endl;

    return 0;
}