#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> paper(100, vector<int>(100, 0));

    for (int k = 0; k < n; ++k) {
        int x, y;
        cin >> x >> y;

        for (int i = x; i < x + 10; ++i) {
            for (int j = y; j < y + 10; ++j) {
                paper[i][j] = 1;
            }
        }
    }
    int area = 0;
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            area += paper[i][j];
        }
    }
    cout << area << "\n";
    return 0;
}