#include <iostream>
#include <vector>

using namespace std;
using namespace std::chrono;

int Factorial(int x) {
    if (x <= 0) {
        return 1;
    }

    return x * Factorial(x - 1);
}

bool IsPalindrom(string str) {
    int l = str.length() - 1;
    for (int i = 0; i < l; i++) {
        if (str[i] != str[l - i]) {
            return false;
        }
    }

    return true;
}

vector<string> PalindromFilter(vector<string>& words, int minLength) {
    vector<string> res;
    for (auto s: words) {
        if (s.length() >= minLength && IsPalindrom(s)) {
            res.push_back(s);
        }
    }

    return res;
}

const string chars = "QWERTYUIOPASDFGHJKLZXCVBNM1234567890qwertyuiopasdfghjklzxcvbnm";

string getRandomString() {
    auto s = rand() % 10;
    auto cs = chars.size();
    char biba[s];
    for (int i = 0; i < s; i++) {
        biba[i] = chars[rand() % cs];
    }

    string str(biba);
    return str;
}


int main() {
//    std::cout << "Hello, World!" << std::endl;
//    cout << Factorial(-1);
//    cout << IsPalindrom("madam");
    auto start = steady_clock::now();

    vector<string> strings(12500000);

    for (int i = 0; i < 12500000; i++) {
//        cout << i << endl;
        strings.push_back(getRandomString());
    }

    auto finish = steady_clock::now();

    cout << "generate input values " << duration_cast<milliseconds>(finish - start).count() << endl;

    start = steady_clock::now();
    auto palindromes = PalindromFilter(strings, 3);
    finish = steady_clock::now();

    cout << "palindrome filter " << duration_cast<milliseconds>(finish - start).count() << endl;

    return 0;
}


