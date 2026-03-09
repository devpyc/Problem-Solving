#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();
    for (int i = 1; i <= t; i++) {
        string s;
        getline(cin, s);

        vector<string> S;
        istringstream iss(s);
        string S1;

        while (iss >> S1) {
            S.push_back(S1);
        }
        reverse(S.begin(), S.end());

        cout << "Case #" << i << ":";
        for (const auto &w: S) {
            cout << " " << w;
        }
        cout << endl;
    }
}