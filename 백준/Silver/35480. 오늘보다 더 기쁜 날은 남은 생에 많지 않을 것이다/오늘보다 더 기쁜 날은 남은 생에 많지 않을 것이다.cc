#include <bits/stdc++.h>
using namespace std;

struct Date {
    int y,m,d;
};

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int y0,m0,d0,y1,m1,d1,n;
    cin>>y0>>m0>>d0>>y1>>m1>>d1>>n;

    vector<Date>a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i].y>>a[i].m>>a[i].d;
    }

    long long cnt=0,ans=0;

    for(int i=0; i<n; i++) {
        if(a[i].m==m0&&a[i].d==d0&&y0>=a[i].y) {
            cnt+=y0-a[i].y;
        }
    }

    for(int i=0; i<n; i++){
        int y=a[i].y,m=a[i].m,d=a[i].d;
        long long s=(m>m0||m==m0&&d>d0)?y0:y0+1,e=(m<m1||m==m1&&d<=d1)?y1:y1-1,l=max(s,1LL*y+cnt+1);
        if(l<=e) ans+=e-l+1;
    }
    cout<<ans;
}