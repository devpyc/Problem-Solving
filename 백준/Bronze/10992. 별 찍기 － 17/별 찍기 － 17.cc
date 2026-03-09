#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        cout << " ";
    }
    cout << "*\n";

    for (int i = 2; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        cout << "*";

        for (int j = 0; j < 2 * (i - 1) - 1; j++) {
            cout << " ";
        }

        if (i > 1) {
            cout << "*";
        }

        cout << "\n";
    }

    if (n > 1) {
        for (int i = 0; i < 2 * n - 1; i++) {
            cout << "*";
        }
    }

    return 0;
}