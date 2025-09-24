// Lab_02.1.04cpp
// <Бас, Сергій>
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 0.4

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    const double PI = acos(-1.0);
    double alpha;
    char unit;

    cout << "Enter alpha: ";
    cin >> alpha;
    cout << "Enter unit (d for degrees, r for radians): ";
    cin >> unit;

    if (unit == 'd' || unit == 'D')
        alpha = alpha * PI / 180.0;

    double z1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);
    double z2 = 2 * sqrt(2) * cos(alpha) * sin(PI / 4 + 2 * alpha);

    cout << fixed << setprecision(15);
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    cout << "abs(z1 - z2) = " << fabs(z1 - z2) << endl;

    return 0;
}
