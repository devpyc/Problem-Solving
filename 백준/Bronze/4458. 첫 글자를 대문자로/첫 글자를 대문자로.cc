#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin,s);
        s[0]=toupper(s[0]);
        cout<<s<<"\n";
    }
}