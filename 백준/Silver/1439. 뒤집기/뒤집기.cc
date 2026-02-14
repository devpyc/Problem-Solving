#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;

    int cnt0=0,cnt1=0;

    if (s[0]=='0') cnt0++;
    else cnt1++;

    for (int i=1; i<s.size(); i++) {
        if (s[i]!=s[i-1]) {
            if (s[i]=='0') cnt0++;
            else cnt1++;
        }
    }
    cout<<min(cnt0,cnt1);
}