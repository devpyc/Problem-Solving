#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int x=stoi(a)+stoi(b);

    string s=to_string(x);
    reverse(s.begin(),s.end());
    cout<<stoi(s);
}