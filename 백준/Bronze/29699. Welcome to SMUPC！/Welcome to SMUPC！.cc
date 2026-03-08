#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    n-=1;
    n%=14;
    string s="WelcomeToSMUPC";
    cout<<s[n];
}