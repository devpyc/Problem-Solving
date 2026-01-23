#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    int sum=1,ans=0;
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        if (x) {
            ans+=sum;
            sum++;
        }else {
            sum=1;
        }
    }
    cout<<ans;
}