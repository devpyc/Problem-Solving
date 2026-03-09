#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define pii pair<int,int>
#define mi map<int,int>
#define qi queue<int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define endl "\n"
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    int N;
    cin >> N;
    vi M(N);

    for (int i = 0; i < N; ++i) {
        cin >> M[i];
    }

    double v = 0.0;
    for (int i = 0; i < N; ++i) {
        double a = 1 - (v / 100);
        double b = 1 - (M[i] / 100.0);
        v = (1 - (a * b)) * 100;
        cout << fixed << setprecision(6) << v << endl;
    }

    return 0;
}