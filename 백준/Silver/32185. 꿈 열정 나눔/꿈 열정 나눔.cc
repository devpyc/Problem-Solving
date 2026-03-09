#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    ll V0, P0, S0;
    cin >> V0 >> P0 >> S0;

    ll sum0 = V0 + P0 + S0;

    vector<pair<ll, int>> students;

    for (int i = 1; i <= N; i++) {
        ll Vi, Pi, Si;
        cin >> Vi >> Pi >> Si;

        ll sum_i = Vi + Pi + Si;
        if (sum_i <= sum0) {
            students.push_back({sum_i, i});
        }
    }

    sort(students.begin(), students.end(), greater<pair<ll, int>>());

    vector<int> team;
    team.push_back(0);

    for (int i = 0; i < min(M - 1, (int)students.size()); i++) {
        team.push_back(students[i].second);
    }

    for (int i = 0; i < team.size(); i++) {
        cout << team[i] << " ";
    }
    cout << endl;

    return 0;
}