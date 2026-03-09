#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> s;
    int a = 0;
    s.insert(a);

    for (int i = 1; i <= n; ++i) {
        int next = a - i;
        if (next < 0 || s.count(next)) {
            next = a + i;
        }
        a = next;
        s.insert(a);
    }

    cout << a << endl;
    return 0;
}