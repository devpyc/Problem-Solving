#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string a,b;
    cin>>a>>b;

    bitset<81>A(a),B(b);
    while (B.any()) {
        bitset<81>c=A&B;
        A^=B;
        B=c<<1;
    }
    string res=A.to_string();
    size_t check=res.find('1');
    cout<<(check==string::npos?"0":res.substr(check));
}