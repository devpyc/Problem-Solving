#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<int> s(N), prefix(N + 1, 0);

    for (int i = 0; i < N; i++) {
        cin >> s[i];
        prefix[i + 1] = prefix[i] + s[i];
    }

    map<int, int> prefixMap;
    int closestSum = INT_MAX;
    int L = 0, R = 0;

    for (int i = 0; i <= N; i++) {
        auto it = prefixMap.lower_bound(prefix[i]);

        if (it != prefixMap.end()) {
            int diff = abs(prefix[i] - it->first);
            if (diff < abs(closestSum)) {
                closestSum = prefix[i] - it->first;
                L = it->second + 1;
                R = i;
            }
        }

        if (it != prefixMap.begin()) {
            --it;
            int diff = abs(prefix[i] - it->first);
            if (diff < abs(closestSum)) {
                closestSum = prefix[i] - it->first;
                L = it->second + 1;
                R = i;
            }
        }

        prefixMap[prefix[i]] = i;
    }

    cout << closestSum << endl;
    cout << L << " " << R << endl;

    return 0;
}