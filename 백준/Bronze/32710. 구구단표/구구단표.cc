#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    if (n>=1&&n<=9) {
        cout<<1;
        return 0;
    }

    for (int i=2; i<=9; i++) {
        for (int j=1; j<=9; j++) {
            if (i*j==n) {
                cout<<1;
                return 0;
            }
        }
    }
    cout<<0;
}