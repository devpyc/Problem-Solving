#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    while (n--) {
        int a,b,x;
        cin>>a>>b>>x;
        cout<<a*x-a+b<<"\n";
    }
}