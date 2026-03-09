#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    int K, N, M;
    cin >> K >> N >> M;

    int money = max(0, K * N - M);

    cout << money << endl;

    return 0;
}