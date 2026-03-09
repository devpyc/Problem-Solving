#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    ll n;
    cin>>n;
    for (ll i = 1; i <= n; ++i) {
        cout << i << " ";
        if (i % 6 == 0) {
            cout << "Go! ";
        }
    }
    if (n % 6 != 0) {
        cout << "Go!";
    }
    cout << endl;
}