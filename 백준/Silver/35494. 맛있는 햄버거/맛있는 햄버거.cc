#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<int>arr(n);

    for (int &i:arr) {
        cin>>i;
    }

    int MAX=0;
    long long ans=0;
    for (int i=0; i<n; i++) {
        MAX=max(MAX,arr[i]);
        ans+=MAX;
    }
    cout<<(ans%3==0?"Delicious!":"Oh My God!");
}