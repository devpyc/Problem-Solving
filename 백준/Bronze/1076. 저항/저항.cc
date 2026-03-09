#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

int main() {
    map<string, int> colorMap = {
            {"black", 0}, {"brown", 1}, {"red", 2}, {"orange", 3}, {"yellow", 4},
            {"green", 5}, {"blue", 6}, {"violet", 7}, {"grey", 8}, {"white", 9}
    };

    string c1, c2, c3;
    cin >> c1 >> c2 >> c3;

    ll resistance = (colorMap[c1] * 10 + colorMap[c2]) * pow(10, colorMap[c3]);

    cout << resistance << endl;

    return 0;
}