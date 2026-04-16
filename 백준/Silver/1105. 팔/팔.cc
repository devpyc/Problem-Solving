#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string a,b;
    cin>>a>>b;

    if (a.size()!=b.size()) {
        cout<<0;
        return 0;
    }

    int i=0;
    while (i<a.size()&&a[i]==b[i]) {
        i++;
    }
    cout<<count(a.begin(),a.begin()+i,'8');
}