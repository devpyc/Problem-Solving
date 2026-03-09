#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int m = 0;
    
    for(int i = 0; i < n; i++) {
        int a, d, g;
        cin >> a >> d >> g;
        
        int s = a * (d + g);
        if(a == (d + g)) {
            s *= 2;
        }
        
        if(s > m) {
            m = s;
        }
    }
    
    cout << m << endl;
    
    return 0;
}