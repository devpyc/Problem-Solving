#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long X, Y;
    cin >> X >> Y;

    int Z = (Y * 100) / X;

    if (Z >= 99) {
        cout << -1;
        return 0;
    }

    long long left = 1;
    long long right = X;
    long long answer = -1;

    while (left <= right) {
        long long mid = (left + right) / 2;
        int newZ = ((Y + mid) * 100) / (X + mid);

        if (newZ > Z) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << answer;
    return 0;
}