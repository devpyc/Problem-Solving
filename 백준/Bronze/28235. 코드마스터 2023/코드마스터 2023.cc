#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin>>s;
    cout<<(s=="SONGDO"?"HIGHSCHOOL":(s=="CODE"?"MASTER":(s=="2023"?"0611":"CONTEST")));
}