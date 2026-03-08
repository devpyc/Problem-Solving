#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a,b;
    cin>>a>>b;
    for (int i=0; i<a; i++) {
        for (int j=0; j<b; j++) {
            cout<<"*";
        }
        cout<<"\n";
    }
}