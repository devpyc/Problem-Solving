#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string c = "abcdefghijklmnopqrstuvwxyz";
    string s;
    cin>>s;
    for (int i = 0; i < c.size(); i++) {
        if(s.find(c[i])!=string::npos) {
            cout<<s.find(c[i])<<" ";
        }else {
            cout<<"-1 ";
        }
    }
}
