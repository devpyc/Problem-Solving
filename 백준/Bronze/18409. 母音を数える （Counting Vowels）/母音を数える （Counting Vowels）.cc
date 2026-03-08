#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for (int i=0; i<s.size(); i++) {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') cnt++;
    }
    cout<<cnt;
}