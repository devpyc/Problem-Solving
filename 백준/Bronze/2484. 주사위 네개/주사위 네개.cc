#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculatePrize(vector<int>& dice) {
    sort(dice.begin(), dice.end());

    if (dice[0] == dice[3]) {
        return 50000 + dice[0] * 5000;
    } else if (dice[0] == dice[2] || dice[1] == dice[3]) {
        return 10000 + dice[1] * 1000;
    } else if (dice[0] == dice[1] && dice[2] == dice[3]) {
        return 2000 + dice[0] * 500 + dice[2] * 500;
    } else if (dice[0] == dice[1] || dice[1] == dice[2] || dice[2] == dice[3]) {
        return 1000 + dice[2] * 100;
    }

    return dice[3] * 100;
}

int main() {
    int N;
    cin >> N;

    int maxPrize = 0;

    for (int i = 0; i < N; ++i) {
        vector<int> dice(4);
        for (int j = 0; j < 4; ++j) {
            cin >> dice[j];
        }

        maxPrize = max(maxPrize, calculatePrize(dice));
    }

    cout << maxPrize << endl;

    return 0;
}
