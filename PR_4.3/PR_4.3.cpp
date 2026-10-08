#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, xp, xk, dx, x, F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "X_poch = "; cin >> xp;
    cout << "X_kin = "; cin >> xk;
    cout << "dX = "; cin >> dx;

    cout << fixed;
    cout << "-------------------------" << endl;
    cout << "|   x   |      F        |" << endl;
    cout << "-------------------------" << endl;

    x = xp;
    while (x <= xk) {
        // 1) c < 0 і а не дорівнює 0
        if (c < 0 && a != 0) {
            F = -a * x * x;
        }
        // 2) c > 0 і а дорівнює 0
        else if (c > 0 && a == 0) {
            //щоб cx не стало 0
            if (c * x == 0) {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            F = (a - x) / (c * x);
        }
        // 3) в інших випадках
        else {
            if (c == 0) {
                cout << "Error: Division by zero (c = 0)!" << endl;
                return 1;
            }
            F = x / c;
        }

        cout << "| " << setw(5) << setprecision(2) << x
            << " | " << setw(13) << setprecision(3) << F << " |" << endl;

        x += dx;
    }

    cout << "-------------------------" << endl;

    return 0;
}