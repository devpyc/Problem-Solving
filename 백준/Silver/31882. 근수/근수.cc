#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    string S;
    cin >> S;

    int score = 0;
    int count = 0;

    for (int i = 0; i < N; ++i) {
        if (S[i] == '2') {
            count++;
        } else {
            if (count > 0) {
                for (int k = 1; k <= count; ++k) {
                    score += k * (count - k + 1);
                }
                count = 0;
            }
        }
    }

    if (count > 0) {
        for (int k = 1; k <= count; ++k) {
            score += k * (count - k + 1);
        }
    }

    cout << score << endl;
    return 0;
}