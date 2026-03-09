#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> A(n);
    for(auto &x: A) cin >> x;

    ll sumA = 0;
    for(auto x: A) sumA += x;

    ll max1 = LLONG_MIN, max2 = LLONG_MIN;
    ll min1 = LLONG_MAX, min2 = LLONG_MAX;

    for(auto x: A){
        if(x > max1){
            max2 = max1;
            max1 = x;
        }
        else if(x > max2){
            max2 = x;
        }

        if(x < min1){
            min2 = min1;
            min1 = x;
        }
        else if(x < min2){
            min2 = x;
        }
    }

    ll c1 = sumA;
    ll c2 = LLONG_MIN;

    if(n >= 2){
        ll temp = sumA - max1 - max2 + 2 * (max1 * max2);
        c2 = temp;
    }

    ll c3 = LLONG_MIN;

    if(n >= 2){
        ll temp = sumA - min1 - min2 + 2 * (min1 * min2);
        c3 = temp;
    }

    ll ans = c1;
    if(c2 > ans) ans = c2;
    if(c3 > ans) ans = c3;

    cout << ans;
}