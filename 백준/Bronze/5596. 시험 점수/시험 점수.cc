#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define pii pair<int, int>
#define vi vector<int>
#define qi queue<int>
#define vvi vector<vector<int>>
#define vvvi vector<vector<vector<int>>>
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr)
using namespace std;

int32_t main()
{
    int a[4],b[4];
    int aa=0,bb=0;
    for(int i=0; i<4; i++){
        cin>>a[i];
        aa+=a[i];
    }
    for(int i=0; i<4; i++){
        cin>>b[i];
        bb+=b[i];
    }
    if(aa>bb){
        cout<<aa;
    }else{
        cout<<bb;
    }
}