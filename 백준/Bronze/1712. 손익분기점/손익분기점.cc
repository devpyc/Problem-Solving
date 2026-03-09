#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (b >= c) {
        cout << "-1" << endl;
    } else {
        int s = a / (c - b) + 1;
        cout << s << endl;
    }

    return 0;
}
