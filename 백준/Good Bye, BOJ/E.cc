// inversion counting 구하기
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        cin>>n;

        vector<int>arr(n+1);
        vector<vector<int>>A(n+2);
        for (int i=1; i<=n; i++) {
            cin>>arr[i];
            A[arr[i]].push_back(i);
        }

        priority_queue<int>pq;
        vector<int>res(n+1);
        bool check=true;
        for (int i=n; i>=1; i--) {
            for (int j:A[i]) {
                pq.push(j);
            }

            if (pq.empty()) {
                check=false;
                break;
            }

            res[i]=pq.top();
            pq.pop();
        }

        if (!check) {
            cout<<-1<<"\n";
            continue;
        }

        ordered_set<int>s;

        long long ans=0;
        for (int i=1; i<=n; i++) {
            ans+=1LL*s.size()-s.order_of_key(res[i]);
            s.insert(res[i]);
        }
        cout<<ans<<"\n";
    }
}