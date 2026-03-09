#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        numbers[i] = i + 1;
    }
    
    do {
        for (int i = 0; i < n; ++i) {
            cout << numbers[i] << ' ';
        }
        cout << '\n';
    } while (next_permutation(numbers.begin(), numbers.end()));
    
    return 0;
}