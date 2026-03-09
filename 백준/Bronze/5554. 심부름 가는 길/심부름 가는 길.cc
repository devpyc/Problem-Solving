#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int t = a + b + c + d;

    int m = t / 60;
    int s = t % 60;

    cout << m << endl;
    cout << s << endl;

    return 0;
}