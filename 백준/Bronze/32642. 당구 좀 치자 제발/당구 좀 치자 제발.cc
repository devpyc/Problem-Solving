#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,x;
    cin>>n;
    
    long long a=0,b=0;
    while (n--) {
        cin>>x;
        a+=x?1:-1;
        b+=a;
    }
    cout<<b;
}