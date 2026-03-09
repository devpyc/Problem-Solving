#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define pb push_back
#define as assign
#define pi pair<int,int>
#define mi map<int,int>
#define qi queue<int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define endl "\n"
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int32_t main() {
    io;
    int n,l,d;
    cin>>n>>l>>d;

    for (int t=0; ; t+=d) {
        bool is=false;
        for (int i=0; i<n; ++i) {
            int start=i*(l+5);
            int end=start+l;
            if (t>=start && t<end) {
                is = true;
                break;
            }
        }
        if (!is) {
            cout << t << endl;
            break;
        }
    }

    return 0;
}