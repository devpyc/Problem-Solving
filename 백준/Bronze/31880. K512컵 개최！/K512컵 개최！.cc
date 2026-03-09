#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main() {
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    int ansa=0,ansb=1;

    for(int i=0; i<n; i++){
        cin>>a[i];
        ansa+=a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
        if(b[i]!=0){
            ansb*=b[i];
        }
    }
    cout<<ansa*ansb<<endl;
}