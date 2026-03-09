#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    int L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;

    int dko = (A + C - 1) / C;
    int dma = (B + D - 1) / D;

    int max_days = max(dko, dma);
    int vacation_days = L - max_days;

    cout << vacation_days << endl;

    return 0;
}