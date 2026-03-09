#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main() {
    int current = 0;
    int max_people = 0;

    for (int i = 0; i < 4; ++i) {
        int off, on;
        cin >> off >> on;

        current -= off;
        current += on;

        max_people = max(max_people, current);
    }

    cout << max_people << endl;

    return 0;
}