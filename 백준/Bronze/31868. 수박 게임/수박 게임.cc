#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
    int N;
    int K;
    cin >> N >> K;
    
    for (int i = 1; i < N; ++i) {
        K /= 2;
    }
    
    cout << K << endl;

    return 0;
}