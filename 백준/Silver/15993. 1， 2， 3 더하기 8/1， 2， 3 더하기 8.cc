#include <bits/stdc++.h>
using namespace std;

const long long MOD=1000000009;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<int>arr(n);
    int MAX=0;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
        MAX=max(MAX,arr[i]);
    }
    vector<long long>odd(MAX+1),even(MAX+1);

    even[0]=1;
    for (int i=1; i<=MAX; i++) {
        for (int j=1; j<=3; j++) {
            if (i-j>=0) {
                odd[i]=(odd[i]+even[i-j])%MOD;
                even[i]=(even[i]+odd[i-j])%MOD;
            }
        }
    }
    for (int i:arr) {
        cout<<odd[i]<<" "<<even[i]<<"\n";
    }
}