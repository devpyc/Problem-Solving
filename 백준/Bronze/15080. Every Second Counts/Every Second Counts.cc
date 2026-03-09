#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h1,m1,s1,h2,m2,s2;
    scanf("%d : %d : %d",&h1,&m1,&s1);
    scanf("%d : %d : %d",&h2,&m2,&s2);

    int ans1=h1*3600+m1*60+s1;
    int ans2=h2*3600+m2*60+s2;
    if(ans2<ans1) {
        ans2+=86400;
    }
    cout<<ans2-ans1;
}