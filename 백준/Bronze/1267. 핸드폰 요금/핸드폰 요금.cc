#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    int N;
    int Y = 0, M = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int time;
        cin >> time;

        Y += (time / 30 + 1) * 10;
        M += (time / 60 + 1) * 15;
    }

    if (Y < M) {
        cout << "Y " << Y << endl;
    } else if (M < Y) {
        cout << "M " << M << endl;
    } else {
        cout << "Y M " << Y << endl;
    }
    return 0;
}