#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long a,b;
    cin>>a>>b;

    int cnt=1;
    while (1) {
        if (a==b) {
            cout<<cnt<<"\n";
            break;
        }

        if (a>b) {
            cout<<-1<<"\n";
            break;
        }

        if (b%10==1) b/=10;
        else if (b%2==0) b/=2;
        else {
            cout<<-1;
            break;
        }
        cnt++;
    }
}