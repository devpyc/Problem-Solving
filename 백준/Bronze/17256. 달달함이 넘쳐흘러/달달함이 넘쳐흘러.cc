#include <iostream>

using namespace std;

int main() {
    int ax, ay, az;
    int cx, cy, cz;

    cin >> ax >> ay >> az;
    cin >> cx >> cy >> cz;

    int bx = cx - az;
    int by = cy / ay;
    int bz = cz - ax;

    cout << bx << " " << by << " " << bz << endl;

    return 0;
}