#include <bits/stdc++.h>

using namespace std;

vector<int> averages;

bool isPossibleCnt(int cntOfPeople, const vector<int>& averages) {
    for (int avg : averages) {
        int left = 0;
        int right = 10 * cntOfPeople;
        bool isPossible = false;

        while (left <= right) {
            int sumOfScore = (left + right) / 2;
            int currentAvg = (sumOfScore * 1000) / cntOfPeople;

            if (currentAvg == avg) {
                if (currentAvg > 10 * 1000) {
                    continue;
                }
                isPossible = true;
                break;
            } else if (currentAvg > avg) {
                right = sumOfScore - 1;
            } else {
                left = sumOfScore + 1;
            }
        }

        if (!isPossible) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    averages.resize(n);

    for (int i = 0; i < n; ++i) {
        string input;
        cin >> input;
        input.erase(input.find('.'), 1);
        averages[i] = stoi(input);
    }

    for (int cntOfPeople = 1; cntOfPeople <= 1000; ++cntOfPeople) {
        if (isPossibleCnt(cntOfPeople, averages)) {
            cout << cntOfPeople << endl;
            break;
        }
    }

    return 0;
}