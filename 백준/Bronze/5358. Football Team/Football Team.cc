#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    while (getline(cin,s)) {
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='i') s[i]='e';
            else if (s[i]=='e') s[i]='i';
            else if (s[i]=='I') s[i]='E';
            else if (s[i]=='E') s[i]='I';
        }
        cout<<s<<"\n";
    }
}