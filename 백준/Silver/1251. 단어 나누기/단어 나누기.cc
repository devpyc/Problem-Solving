#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    
    int n = s.size();
    string ans = "~";

    for (int i = 1; i <= n - 2; i++){
        for (int j = i + 1; j <= n - 1; j++){
            string a = s.substr(0, i);
            string b = s.substr(i, j - i);
            string c = s.substr(j, n - j);
            
            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            reverse(c.begin(), c.end());
            
            string res = a + b + c;
            if(res < ans)
                ans = res;
        }
    }
    
    cout << ans;
}