#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> nge(n, -1);
    stack<int> s;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; ++i) {
        while (!s.empty() && a[s.top()] < a[i]) {
            nge[s.top()] = a[i];
            s.pop();
        }
        s.push(i);
    }
    
    for (int num : nge) {
        cout << num << " ";
    }
    
    return 0;
}