#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        ll X;
        cin >> X;

        ll root = sqrt(X);
        cout<<(root * root == X)?1:0;
        cout<<" ";
    }

    return 0;
}