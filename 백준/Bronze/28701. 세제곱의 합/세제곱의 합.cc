#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    long long a1=0,a2=0,a3=0;
    for (int i=1; i<=n; i++) {
        a1+=i;
        a2+=(i*i*i);
    }
    cout<<a1<<"\n"<<a1*a1<<"\n"<<a2;
}