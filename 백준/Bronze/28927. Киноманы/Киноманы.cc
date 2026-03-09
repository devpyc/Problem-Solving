#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define pi pair<int, int>
#define mi map<int, int>
#define qi queue<int>
#define di deque<int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define endl "\n"
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;

int main() {
    io;
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;

    int ma = 3 * a + 20 * b + 120 * c;
    int ti = 3 * d + 20 * e + 120 * f;

    if (ma > ti) cout << "Max" << endl;
    else if (ma < ti) cout << "Mel" << endl;
    else cout << "Draw" <<endl;

    return 0;
}