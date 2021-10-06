#include <iostream>
#include <cmath>

using namespace std;

namespace Equation {
    int main() {
        double a, b, c;
        cin >> a >> b >> c;
        if (a == 0 && b == 0) {
            return 0;
        }
        if (a == 0) {
            cout << -c/b;
            return 0;
        }
        double d = pow(b, 2) - 4 * a * c;
        if (d < 0) {
            return 0;
        }

        double d_sqrt = sqrt(d);
        double x1 = (-b + d_sqrt) / (2*a);
        if (d_sqrt == 0) {
            cout << x1;
            return 0;
        }

        double x2 = (-b - d_sqrt) / (2*a);
        cout << x1 << " " << x2;
        return 0;
    }
}
