#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);

    int arr[11];
    for (int i=0; i<11; i++) {
        cin>>arr[i];
    }

    int n;
    cin>>n;

    int ans=0;
    while (n--) {
        int a,c;
        double b;
        cin>>a>>b>>c;
        ans+=(b>=2.0&&c>=17?arr[a]:0);
    }
    cout<<ans;
}