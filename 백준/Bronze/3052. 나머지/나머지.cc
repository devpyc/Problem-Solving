#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int>arr;
    for(int i=0; i<10; i++) {
        int x;
        cin>>x;
        arr.insert(x%42);
    }
    cout<<arr.size();
}