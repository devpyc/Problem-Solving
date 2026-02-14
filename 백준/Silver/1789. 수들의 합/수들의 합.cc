#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long s;
    cin>>s;

    long long sum=0,n=1,cnt=0;
    while (1) {
        sum+=n;
        if (sum>s) break;
        n++;
        cnt++;
    }
    cout<<cnt;
}