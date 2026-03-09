#include <iostream>
using namespace std;

int main() {
    int n[8];

    for (int i = 0; i < 8; ++i) {
        cin >> n[i];
    }

    bool asc = true;
    for (int i = 1; i < 8; ++i) {
        if (n[i] != n[i - 1] + 1) {
            asc = false;
            break;
        }
    }

    bool desc = true;
    for (int i = 1; i < 8; ++i) {
        if (n[i] != n[i - 1] - 1) {
            desc = false;
            break;
        }
    }

    if (asc) {
        cout << "ascending\n";
    } else if (desc) {
        cout << "descending\n";
    } else {
        cout << "mixed\n";
    }

    return 0;
}