#include <bits/stdc++.h>
using namespace std;

bitset<33554432>visited;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int x;
    while (cin>>x) {
        if (!visited.test(x)) {
            cout<<x<<" ";
            visited.set(x);
        }
    }
}