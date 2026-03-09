#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, x1, x2, y1, y2, r1, r2;

    cin >> t;
    while (t--) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        if (r1 > r2) {
            swap(x1, x2);
            swap(y1, y2);
            swap(r1, r2);
        }
        double dist = sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2));
        if (dist==0.0 && r1==r2) {
            cout << "-1\n";
        } else if (dist>r1+r2 || dist<r2-r1) {
            cout << "0\n";
        } else if (dist==r1+r2 || r2==dist+r1) {
            cout << "1\n";
        } else {
            cout << "2\n";
        }
    }
}