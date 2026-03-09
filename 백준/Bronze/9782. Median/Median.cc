#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num = 1;
    
    while (cin >> n && n != 0) {
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        double ans;
        if (n % 2 == 1) {
            ans = arr[n / 2];
        } else {
            ans = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
        }
        
        cout << "Case " << num << ": " << fixed << setprecision(1) << ans << endl;
        num++;
    }
}