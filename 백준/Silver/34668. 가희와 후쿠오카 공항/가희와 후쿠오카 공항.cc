#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int q;
    cin>>q;
    while (q--) {
        int n;
        cin>>n;
        int ans=366+(n/50)*12;
        if (ans>=1080) {
            cout<<-1;
            continue;
        }
        int h=ans/60,m=ans%60;
        cout<<setfill('0')<<setw(2)<<h<<":"<<setfill('0')<<setw(2)<<m<<"\n";
    }
}