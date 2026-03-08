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
        reverse(s.begin(),s.end());
        cout<<s<<"\n";
    }
}