#include <string>
#include <iostream>

using namespace std;

namespace SecondOccurrence {
    int main() {
        string input;

        cin >> input;

        bool seen;
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == 'f') {
                if (!seen) {
                    seen = true;
                } else {
                    cout << i << endl;
                    return 0;
                }
            }
        }

        if (seen) {
            cout << -1 << endl;
        } else {
            cout << -2 << endl;
        }

        return 0;
    }
}