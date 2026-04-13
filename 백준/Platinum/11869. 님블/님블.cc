#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<long long>arr(n);
    long long ans=0;
    for (long long &i:arr) {
        cin>>i;
        ans^=i;
    }

    cout<<(ans==0?"cubelover":"koosaga");
}