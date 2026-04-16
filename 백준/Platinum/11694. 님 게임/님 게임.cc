#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<int>arr(n);

    for (int &i:arr) {
        cin>>i;
    }

    bool check=true;

    int ans=0;
    for (int i:arr) {
        ans^=i;
        if (i>1) check=false;
    }

    if (check) {
        cout<<(arr.size()%2==1?"cubelover":"koosaga");
    }else {
        cout<<(ans==0?"cubelover":"koosaga");
    }
}