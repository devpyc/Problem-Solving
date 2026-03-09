#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
    string S;
    cin >> S;

    int count = 0;
    int n = S.length();

    for (int i = 0; i <= n - 3; ) {
        if (S[i + 1] == S[i] + 1 && S[i + 2] == S[i + 1] + 1) {
            if (i + 3 < n && S[i + 3] == S[i + 2] + 1) {
                int j = i + 3;
                while (j + 1 < n && S[j + 1] == S[j] + 1) {
                    j++;
                }
                i = j + 1;
            } else {
                count++;
                i += 3;
            }
        } else {
            i++;
        }
    }

    cout << count << endl;

    return 0;
}