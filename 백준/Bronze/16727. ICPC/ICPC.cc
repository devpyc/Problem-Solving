#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int p1, s1, s2, p2;
    cin >> p1 >> s1 >> s2 >> p2;

    int DevSe = p1 + p2;
    int CenSe = s1 + s2;

    if (DevSe > CenSe) {
        cout << "Persepolis";
    } else if (CenSe > DevSe) {
        cout << "Esteghlal";
    } else {
        if (p2 > s1) {
            cout << "Persepolis";
        } else if (s1 > p2) {
            cout << "Esteghlal";
        } else {
            cout << "Penalty";
        }
    }

    return 0;
}