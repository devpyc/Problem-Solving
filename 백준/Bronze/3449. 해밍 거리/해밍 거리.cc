#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        string a,b;
        cin>>a>>b;
        int ans=0;
        for (int i=0; i<a.size(); i++) {
            ans+=(a[i]!=b[i]);
        }
        cout<<"Hamming distance is "<<ans<<".\n";
    }
}