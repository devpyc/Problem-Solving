#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> digits = {
        {"0000", "0  0", "0  0", "0  0", "0000"}, // 0
        {"   1", "   1", "   1", "   1", "   1"}, // 1
        {"2222", "   2", "2222", "2", "2222"}, // 2
        {"3333", "   3", "3333", "   3", "3333"}, // 3
        {"4  4", "4  4", "4444", "   4", "   4"}, // 4
        {"5555", "5", "5555", "   5", "5555"}, // 5
        {"6666", "6", "6666", "6  6", "6666"}, // 6
        {"7777", "   7", "   7", "   7", "   7"}, // 7
        {"8888", "8  8", "8888", "8  8", "8888"}, // 8
        {"9999", "9  9", "9999", "   9", "   9"}  // 9
};

void solve(char digit) {
    int d = digit - '0';
    for (const auto& line : digits[d]) {
        cout << line << endl;
    }
    cout << endl;
}

int main() {
    string n;
    cin >> n;

    for (char digit : n) {
        solve(digit);
    }

    return 0;
}