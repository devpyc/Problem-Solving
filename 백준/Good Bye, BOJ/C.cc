// 각 요리를 A로 고정하고 B의  maximum prefix sum을 만들어서 이분탐색으로 합 최대화
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,d;
    cin>>n>>d;

    vector<array<int,3>>arr(n);
    for (auto& i:arr) {
        cin>>i[0]>>i[1]>>i[2];
    }
    sort(arr.begin(),arr.end());

    vector<int>A(n),B(n);
    for (int i=0; i<n; i++) {
        A[i]=arr[i][0];
        B[i]=(i?max(B[i-1],arr[i][2]):arr[i][2]);
    }

    int ans=0;
    for (int i=0; i<n; i++) {
        if (arr[i][0]>d) continue;
        ans=max(ans,arr[i][1]+arr[i][2]);
        int it=upper_bound(A.begin(),A.end(),d-arr[i][0])-A.begin()-1;
        if (it>=0) ans=max(ans,arr[i][1]+B[it]);
    }
    cout<<ans;
}