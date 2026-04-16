#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<int>arr(n);
    int sum=0;
    for (int &i:arr) {
        cin>>i;
        sum+=i;
    }

    if (n==1) {
        cout<<(sum%2==0?"YES":"NO");
        return 0;
    }

    if (sum%2==0) {
        cout<<"YES";
        return 0;
    }

    for (int i=0; i<n; i++) {
        if ((sum-arr[i])%2==0) {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}