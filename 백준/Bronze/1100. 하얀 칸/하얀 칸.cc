#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    char board[8][8];
    int count = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0 && board[i][j] == 'F') {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}