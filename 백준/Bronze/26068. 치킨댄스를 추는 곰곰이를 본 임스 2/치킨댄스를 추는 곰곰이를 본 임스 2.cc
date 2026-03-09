#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;

        int d = stoi(s.substr(2));

        if (d <= 90) {
            ++cnt;
        }
    }

    cout << cnt << endl;
}