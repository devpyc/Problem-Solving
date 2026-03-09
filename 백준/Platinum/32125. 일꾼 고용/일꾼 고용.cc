#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        ll K;
        cin >> N >> K;

        vector<int> C(N);
        vector<ll> W(N);
        for (int i = 0; i < N; ++i) {
            cin >> C[i];
        }
        for (int i = 0; i < N; ++i) {
            cin >> W[i];
        }

        vector<ll> sum1(N + 1, 0), sum2(N + 1, 0);
        vector<int> count1(N + 1, 0), count2(N + 1, 0);

        for (int i = 0; i < N; ++i) {
            sum1[i + 1] = sum1[i];
            sum2[i + 1] = sum2[i];
            count1[i + 1] = count1[i];
            count2[i + 1] = count2[i];
            if (C[i] == 1) {
                sum1[i + 1] += W[i];
                count1[i + 1]++;
            } else {
                sum2[i + 1] += W[i];
                count2[i + 1]++;
            }
        }

        map<pair<int, ll>, int> mp;
        ll result = 0;
        mp[{0, 0}] = 1;

        for (int i = 1; i <= N; ++i) {
            int diffCount = count1[i] - count2[i];
            ll diffSum = sum1[i] - sum2[i];

            for (auto it = mp.lower_bound({diffCount, diffSum - K}); it != mp.end() && it->first.first == diffCount && it->first.second <= diffSum + K; ++it) {
                result += it->second;
            }

            mp[{diffCount, diffSum}]++;
        }

        cout << result << endl;
    }

    return 0;
}