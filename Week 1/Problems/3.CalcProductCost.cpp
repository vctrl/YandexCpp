#include <iostream>

using namespace std;

namespace CalcProductCost {
    int main() {
        double n, a, b, x, y;
        cin >> n >> a >> b >> x >> y;

        if (n > b) {
            n = n * (1 - (y / 100));
        } else if (n > a) {
            n = n * (1 - (x / 100));
        }

        cout << n << endl;
    }
};
