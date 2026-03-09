#include <bits/stdc++.h>
using namespace std;

struct c {
    int n;
    int g;
    int s;
    int b;
};

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<c> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i].n >> v[i].g >> v[i].s >> v[i].b;
    }
    
    int t = 0;
    for (int i = 0; i < n; i++) {
        if (v[i].n == k) {
            t = i;
            break;
        }
    }
    
    int r = 1;
    
    for (int i = 0; i < n; i++) {
        if (v[i].g > v[t].g || 
            (v[i].g == v[t].g && v[i].s > v[t].s) || 
            (v[i].g == v[t].g && v[i].s == v[t].s && v[i].b > v[t].b)) {
            r++;
        }
    }
    
    cout <<r << endl;
    
    return 0;
}