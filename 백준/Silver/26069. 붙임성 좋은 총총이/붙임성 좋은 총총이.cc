#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int N;
    cin >> N;

    set<string> cur;
    cur.insert("ChongChong");

    for (int i = 0; i < N; i++) {
        string st1, st2;
        cin >> st1 >> st2;

        if (cur.find(st1) != cur.end() || cur.find(st2) != cur.end()) {
            cur.insert(st1);
            cur.insert(st2);
        }
    }

    cout << cur.size() << endl;

    return 0;
}