#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    int L, P;
    cin >> L >> P;

    int a = L * P;
    int r;

    for (int i = 0; i < 5; i++) {
        cin >> r;
        cout << r - a << " ";
    }
    return 0;
}