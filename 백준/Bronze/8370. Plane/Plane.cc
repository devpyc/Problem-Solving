#include <iostream>

using namespace std;

int main() {
    int n1, k1, n2, k2;
    cin >> n1 >> k1 >> n2 >> k2;
    
    int ans = (n1 * k1) + (n2 * k2);
    
    cout << ans << endl;
    
    return 0;
}