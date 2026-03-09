#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;
    if (s[0]=='F') cout<<"Foundation";
    else if (s[0]=='C') cout<<"Claves";
    else if (s[0]=='V') cout<<"Veritas";
    else if (s[0]=='E') cout<<"Exploration";
}