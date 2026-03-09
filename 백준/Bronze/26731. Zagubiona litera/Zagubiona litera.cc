#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    set<char>arr(s.begin(),s.end());
    for(char i='A'; i<='Z'; i++) {
        if(arr.find(i)==arr.end()) {
            cout<<i;
            return 0;
        }
    }
}