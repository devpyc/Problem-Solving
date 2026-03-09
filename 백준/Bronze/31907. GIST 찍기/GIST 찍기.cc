#include <iostream>
#include <vector>

using namespace std;

int main() {
    int K;
    cin >> K;

    vector<string> original = {"G...", ".I.T", "..S."};
    vector<string> expanded;

    for (const string& row : original) {
        string newRow;
        for (char c : row) {
            newRow.append(K, c);
        }
        for (int i = 0; i < K; ++i) {
            expanded.push_back(newRow);
        }
    }

    for (const string& row : expanded) {
        cout << row << endl;
    }

    return 0;
}