#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a,b,c;
    cin>>a>>b>>c;

    cout<<a+b-c<<"\n"<<stoi(to_string(a)+to_string(b))-c;
}