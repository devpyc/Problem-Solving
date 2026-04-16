#include <bits/stdc++.h>
using namespace std;

struct cmp {
  bool operator()(int a, int b) {
        if (abs(a)==abs(b)) return a>b;
        return abs(a)>abs(b);
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;

    priority_queue<int,vector<int>,cmp>pq;
    while (t--) {
        int x;
        cin>>x;
        if (x) pq.push(x);
        else {
            if (!pq.empty()) {
                cout<<pq.top()<<"\n";
                pq.pop();
            }else {
                cout<<0<<"\n";
            }
        }
    }
}