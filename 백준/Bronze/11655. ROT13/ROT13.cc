#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    for (char &c : s) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = (c - 'a' + 13) % 26 + 'a';
            } else {
                c = (c - 'A' + 13) % 26 + 'A';
            }
        }
    }
    return s;
}

int main() {
    string s;
    getline(cin, s);

    cout << solve(s);

    return 0;
}