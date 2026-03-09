#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    vector<int> scores(20);
    for (int i = 0; i < 20; i++) {
        cin >> scores[i];
    }

    int idx20 = 0;
    for (int i = 0; i < 20; i++) {
        if (scores[i] == 20) {
            idx20 = i;
            break;
        }
    }

    int left = scores[(idx20 - 1 + 20) % 20];
    int right = scores[(idx20 + 1) % 20];
    double alice_exp = (left + 20 + right) / 3.0;

    double bob_exp = accumulate(scores.begin(), scores.end(), 0) / 20.0;

    if (alice_exp > bob_exp) {
        cout << "Alice" << endl;
    } else if (alice_exp < bob_exp) {
        cout << "Bob" << endl;
    } else {
        cout << "Tie" << endl;
    }

    return 0;
}