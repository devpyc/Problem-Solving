#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int ans = 0;

    while (A <= B) {
        if (A % 2 == 1 && A + 1 <= B) {
            A += 2;
        } else {
            A += 1;
        }
        ans++;
    }

    cout << ans << endl;
    return 0;
}