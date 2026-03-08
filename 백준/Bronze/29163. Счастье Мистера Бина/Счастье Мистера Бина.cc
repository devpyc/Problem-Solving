#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    int o=0,e=0;
    while (n--) {
        int x;
        cin>>x;
        (x%2==0?e++:o++);
    }
    cout<<(e>o?"Happy":"Sad");
}