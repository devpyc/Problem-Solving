#include <iostream>
using namespace std;

int main() {
    int n, t, l, ans = 1e9;
    cin >> n;
    while (n--) {
        cin >> t >> l;
        ans = min(ans, t + l);
    }
    cout << ans;
    return 0;
}