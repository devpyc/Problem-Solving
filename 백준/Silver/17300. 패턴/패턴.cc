#include <bits/stdc++.h>
using namespace std;

pair<int,int>pos(int x) {
    x--;
    return {x/3,x%3};
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int l;
    cin>>l;

    vector<int>arr(l);
    for (int i=0; i<l; i++) {
        cin>>arr[i];
    }

    if (l<3) {
        cout<<"NO\n";
        return 0;
    }

    vector<bool>check(10,false);
    check[arr[0]]=true;

    for (int i=1; i<l; i++) {
        int res=arr[i-1],cur=arr[i];

        if (check[cur]) {
            cout<<"NO\n";
            return 0;
        }

        auto [r1,c1]=pos(res);
        auto [r2,c2]=pos(cur);

        int dr=r2-r1,dc=c2-c1;

        if (abs(dr)%2==0&&abs(dc)%2==0) {
            int mr=(r1+r2)/2,mc=(c1+c2)/2,mid=mr*3+mc+1;

            if (mid!=res&&mid!=cur&&!check[mid]) {
                cout<<"NO\n";
                return 0;
            }
        }
        check[cur]=true;
    }
    cout<<"YES\n";
}