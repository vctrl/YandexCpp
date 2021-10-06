using namespace std;

namespace Division {
    int main() {
        int a, b;
        cin >> a >> b;
        if (b == 0) {
            cout << "Impossible";
            return 0;
        }

        cout << a / b;

        return 0;
    }
}