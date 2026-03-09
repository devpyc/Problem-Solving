#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int n, int r, vector<int> &com) {
    vector<int> bits(n, 0);
    fill(bits.end() - r, bits.end(), 1);

    do {
        int num = 0;
        for (int i = 0; i < n; ++i) {
            num = (num << 1) | bits[i];
        }
        com.push_back(num);
    } while (next_permutation(bits.begin(), bits.end()));
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> xcom, ycom;

    solve(n, a, xcom);
    solve(n, b, ycom);

    int ans = 0;

    for (int x : xcom) {
        for (int y : ycom) {
            ans = max(ans, x ^ y);
        }
    }

    cout << ans << endl;

    return 0;
}