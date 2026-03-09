#include <bits/stdc++.h>
#define ll long long
using namespace std;

int N, M;
vector<int> trees;

bool isPossible(ll height) {
    ll sum = 0;
    for (int tree : trees) {
        if (tree > height) {
            sum += tree - height;
        }
    }
    return sum >= M;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    trees.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> trees[i];
    }

    ll left = 0;
    ll right = *max_element(trees.begin(), trees.end());
    ll result = 0;

    while (left <= right) {
        ll mid = (left + right) / 2;
        if (isPossible(mid)) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << result << "\n";

    return 0;
}