#include <bits/stdc++.h>
#define ll long long
#define MOD 1'000'000'007
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    unordered_set<char> vow = {'a', 'e', 'i', 'o', 'u'};

    while(t--){
        string S;
        cin >> S;
        int n = S.size();
        vector<int> vow_pos;

        for(int i=0; i<n; ++i){
            if(vow.find(S[i]) != vow.end()){
                vow_pos.push_back(i);
            }
        }

        int m = vow_pos.size();
        if(m == 0){
            cout << "-1\n";
            continue;
        }

        ll ways = 1;

        for(int i=1; i<m; ++i){
            int cons = vow_pos[i] - vow_pos[i-1] - 1;
            ways = (ways * (cons + 1)) % MOD;
        }

        cout << ways << "\n";
    }
}