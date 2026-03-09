#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long k,d;
    cin>>k>>d;
    long long day=0,cur=k;
    int cnt=0;
    while(day+cur<=d) {
        day+=cur;
        cnt++;
        cur*=2;
    }
    cout<<cnt<<"\n";
}