#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;
}