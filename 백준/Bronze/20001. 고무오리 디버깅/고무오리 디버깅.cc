#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    string s;

    getline(cin, s);

    while (true) {
        getline(cin, s);

        if (s == "고무오리 디버깅 끝") {
            break;
        } else if (s == "문제") {
            ans++;
        } else if (s == "고무오리") {
            if (ans == 0) {
                ans += 2;
            } else {
                ans--;
            }
        }
    }

    if (ans == 0) {
        cout << "고무오리야 사랑해" << endl;
    } else {
        cout << "힝구" << endl;
    }
}