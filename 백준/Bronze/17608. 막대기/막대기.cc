#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    stack<int>st;
    while (t--) {
        int x;
        cin>>x;
        st.push(x);
    }
    int a=st.top();
    st.pop();
    int cnt=1;
    while (!st.empty()) {
        if (st.top()>a) {
            a=st.top();
            cnt++;
            st.pop();
        }else {
            st.pop();
        }
    }
    cout<<cnt;
}