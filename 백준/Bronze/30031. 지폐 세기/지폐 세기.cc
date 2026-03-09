#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int ans=0;

    while(n--) {
        int h,w;
        cin>>h>>w;

        if(h==136) {
            ans+=1000;
        }else if(h==142) {
            ans+=5000;
        }else if(h==148) {
            ans+=10000;
        }else {
            ans+=50000;
        }
    }
    cout<<ans<<"\n";
}