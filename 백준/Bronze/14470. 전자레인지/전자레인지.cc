#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;

    int ans = 0;

    if (a < 0) {
        ans += -a * c;
        ans += d;
        ans += b * e;
    } else if (a == 0) {
        ans += d;
        ans += b * e;
    } else {
        ans += (b - a) * e;
    }

    cout << ans << endl;
}