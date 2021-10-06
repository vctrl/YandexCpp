#include <iostream>
#include <vector>

using namespace std;

namespace BinaryNumbers {
    int main() {
        vector<int> quotients;
        int n;
        cin >> n;

        while (n > 0) {
            int r = n % 2;
            n = n / 2;

            quotients.push_back(r);
        }

        for (int i = quotients.size() - 1; i >= 0; i--) {
            cout << quotients[i];
        }

        return 0;
    }
}
