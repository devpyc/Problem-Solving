#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

int main() {
    int D, H, W;
    cin >> D >> H >> W;

    double r = sqrt(H * H + W * W);

    int x = D * H / r;
    int y = D * W / r;

    cout << x << " " << y << endl;

    return 0;
}
