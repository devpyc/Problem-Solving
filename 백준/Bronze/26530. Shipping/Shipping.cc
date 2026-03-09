#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pi pair<int,int>
#define vi vector<int>
#define endl "\n"
#define elif else if
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int x;
        cin >> x;

        double c=0.0;

        for(int j = 0; j<x; j++) {
            string s;
            int a;
            double b;

            cin>>s>>a>>b;

            c+=a*b;
        }

        cout<<"$"<<fixed<<setprecision(2)<<c<<endl;
    }

    return 0;
}