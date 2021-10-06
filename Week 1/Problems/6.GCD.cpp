#include <iostream>

using namespace std;

namespace GCD {
    int main() {
        int a, b;
        cin >> a >> b;
        int l, s;
        if (a >= b) {
            l = a;
            s = b;
        } else {
            l = b;
            s = a;
        }

        int gcd;
        while (true) {
            int rem = l % s;

            if (rem == 0) {
                gcd = s;
                break;
            }

            l = s;
            s = rem;
        }

        cout << gcd << endl;

        return 0;
    }
}

