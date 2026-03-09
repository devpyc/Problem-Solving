#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int N1 = N + 1;
        int N2 = N % 100;

        if (N2 != 0 && N1 % N2 == 0) {
            cout << "Good" << endl;
        } else {
            cout << "Bye" << endl;
        }
    }

    return 0;
}