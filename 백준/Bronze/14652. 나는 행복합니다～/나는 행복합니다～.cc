#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m,k;
int32_t main(){
    cin>>n>>m>>k;
    int cnt=0;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            if(cnt==k){
                cout<<i<<" "<<j;
                return 0;
            }
            cnt++;
        }
    }
}