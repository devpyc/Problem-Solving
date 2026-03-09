#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    int N;
    cin >> N;
    string K;
    cin >> K;
    
    int even = 0;
    int odd = 0;
    
    for(char digit : K) {
        int num = digit - '0';
        if (num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    if (even > odd) {
        cout << 0 << endl;
    } else if (odd > even) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}