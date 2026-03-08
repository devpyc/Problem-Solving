#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long n;
    cin>>n;
    int cnt=0;
    while (n!=1) {
        if (n%2==1) {
            n=n*3+1;
        }else {
            n/=2;
        }
        cnt++;
    }
    cout<<cnt;
}