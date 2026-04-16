#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long a,b;
    cin>>a>>b;
    if (a==b) {
        cout<<0;
        return 0;
    }
    if (a>b) swap(a,b);

    cout<<b-a-1<<"\n";
    for (long long i=a+1; i<b; i++) {
        cout<<i<<" ";
    }
}