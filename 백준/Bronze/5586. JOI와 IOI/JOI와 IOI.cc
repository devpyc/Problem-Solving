#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;
    int a=0,b=0;
    for (int i=0; i<s.size()-2; i++) {
        if (s[i]=='J'&&s[i+1]=='O'&&s[i+2]=='I') a++;
        else if (s[i]=='I'&&s[i+1]=='O'&&s[i+2]=='I') b++;
    }
    cout<<a<<"\n"<<b;
}