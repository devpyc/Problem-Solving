#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    deque<int>q;
    while (t--) {
        int n;
        cin>>n;
        if (n==2) {
            int x;
            cin>>x;
            q.push_back(x);
        }else if (n==1) {
            int x;
            cin>>x;
            q.push_front(x);
        }else if (n==7) {
            if (q.empty()) {
                cout<<-1<<"\n";
            }else {
                cout<<q.front()<<"\n";
            }
        }else if (n==5) {
            cout<<q.size()<<"\n";
        }else if (n==6) {
            cout<<q.empty()<<"\n";
        }else if (n==8) {
            if (q.empty()) {
                cout<<-1<<"\n";
            }else {
                cout<<q.back()<<"\n";
            }
        }else if (n==3) {
            if (q.empty()) {
                cout<<-1<<"\n";
            }else {
                cout<<q.front()<<"\n";
                q.pop_front();
            }
        }else if (n==4) {
            if (q.empty()) {
                cout<<-1<<"\n";
            }else {
                cout<<q.back()<<"\n";
                q.pop_back();
            }
        }
    }
}