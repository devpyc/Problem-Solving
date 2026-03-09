#include <bits/stdc++.h>
using namespace std;

bool is1(char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

bool is2(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    cin.ignore();

    for(int i=0; i<n; i++) {
        string s;
        getline(cin,s);

        int cnt=0,ans=0;
        for(char c:s) {
            if(is1(c)) {
                if(is2(c)) ans++;
                else cnt++;
            }
        }
        cout<<cnt<<" "<<ans<<"\n";
    }
}