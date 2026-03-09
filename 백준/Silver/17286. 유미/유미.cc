#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int32_t main() {
    int yumi_x, yumi_y;
    cin >> yumi_x >> yumi_y;

    int people[3][2];
    for (int i = 0; i < 3; ++i) {
        cin >> people[i][0] >> people[i][1];
    }

    int perm[] = {0, 1, 2};
    double min_distance = 1e9;

    do {
        double current_distance = 0;
        current_distance += distance(yumi_x, yumi_y, people[perm[0]][0], people[perm[0]][1]);
        current_distance += distance(people[perm[0]][0], people[perm[0]][1], people[perm[1]][0], people[perm[1]][1]);
        current_distance += distance(people[perm[1]][0], people[perm[1]][1], people[perm[2]][0], people[perm[2]][1]);

        min_distance = min(min_distance, current_distance);
    } while (next_permutation(perm, perm + 3));

    cout << static_cast<int>(min_distance) << endl;

    return 0;
}