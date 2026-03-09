#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i < 100) {
            cnt++;
        }
        else {
            int a = i / 100;
            int b = (i / 10) % 10;
            int c = i % 10;
            if (a - b == b - c) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}