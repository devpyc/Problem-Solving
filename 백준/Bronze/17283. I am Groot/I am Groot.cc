#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
    int L, R;
    cin >> L >> R;

    int total_length = 0;
    int current_length = L;
    int branches = 1;

    while (true) {
        current_length = (current_length * R) / 100;
        if (current_length <= 5) {
            break;
        }
        branches *= 2;
        total_length += current_length * branches;
    }

    cout << total_length << endl;
    return 0;
}