#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<ull> roads(n-1);
    vector<ull> prices(n);

    for(auto &x: roads){
        cin >> x;
    }
    for(auto &x: prices){
        cin >> x;
    }

    ull total_cost =0;
    ull min_price = prices[0];

    for(int i=0;i<n-1;i++){
        min_price = min(min_price, prices[i]);
        total_cost += min_price * roads[i];
    }
    cout << total_cost;
}