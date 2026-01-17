#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,res=0;
    cin>>n;

    vector<int>a(n);
    for (int &i:a) {
        cin>>i;
        res^=i;
    }

    if (!res) {
        return cout<<0,0;
    }

    int ans=0;
    for (int i:a) {
        ans+=((i^res)<i);
    }
    cout<<ans;
}