#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {
    int k;
    cin >> k;

    vector<vector<int>> lawn(10, vector<int>(10, 1));

    for (int week = 0; week < k; week++) {
        vector<int> rows(3), cols(3);
        for (int i = 0; i < 3; i++) cin >> rows[i];
        for (int i = 0; i < 3; i++) cin >> cols[i];

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                lawn[i][j]++;
            }
        }

        for (int r : rows) {
            for (int j = 0; j < 10; j++) {
                lawn[r-1][j] = 1;
            }
        }
        for (int c : cols) {
            for (int i = 0; i < 10; i++) {
                lawn[i][c-1] = 1;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << lawn[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}