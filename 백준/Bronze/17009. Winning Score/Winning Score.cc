#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int A[3], B[3];
    for (int i = 0; i < 3; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> B[i];
    }
    int a = A[0] * 3 + A[1] * 2 + A[2];
    int b = B[0] * 3 + B[1] * 2 + B[2];

    if (a > b) {
        cout << "A";
    } else if (a < b) {
        cout << "B";
    } else {
        cout << "T";
    }
}