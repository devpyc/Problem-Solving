#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    int a, b, c;
    int d;
    cin >> a >> b >> c;
    cin >> d;

    int t = a * 3600 + b * 60 + c + d;
    int h = (t / 3600) % 24;
    int m = (t % 3600) / 60;
    int s = t % 60;

    cout << h << " " << m << " " << s << endl;

    return 0;
}