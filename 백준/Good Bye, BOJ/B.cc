// 마감일이 단조증가수열이므로 1번부터 순서대로 푸는게 최적임이 보장됨
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;

        long long A=0,B=0,C=0;
        bool check=true;
        for (int i=1; i<=n; i++) {
            long long a,b,c,d;
            cin>>a>>b>>c>>d;

            A=max(A,a),B=max(B,b),C=max(C,c);
            long long ans=A+B+C+i;
            if (ans>d) check=false;
        }
        cout<<(check?"YES":"NO")<<"\n";
    }
}