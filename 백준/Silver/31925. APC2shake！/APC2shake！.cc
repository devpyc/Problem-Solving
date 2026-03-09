#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

struct Participant {
    string name;
    string enrollment_status;
    string icpc_status;
    int best_shake_rank;
    int apc_rank;
};

bool isEligible(const Participant &p) {
    return p.enrollment_status == "jaehak" &&
           p.icpc_status == "notyet" &&
           (p.best_shake_rank == -1 || p.best_shake_rank > 3);
}

bool compareByAPCRank(const Participant &a, const Participant &b) {
    return a.apc_rank < b.apc_rank;
}

int main() {
    int N;
    cin >> N;
    vector<Participant> participants(N);

    for (int i = 0; i < N; ++i) {
        cin >> participants[i].name
            >> participants[i].enrollment_status
            >> participants[i].icpc_status
            >> participants[i].best_shake_rank
            >> participants[i].apc_rank;
    }

    vector<Participant> eligible_participants;
    for (const auto &p : participants) {
        if (isEligible(p)) {
            eligible_participants.push_back(p);
        }
    }

    sort(eligible_participants.begin(), eligible_participants.end(), compareByAPCRank);

    int M = min(10, (int)eligible_participants.size());
    vector<string> selected_names;
    for (int i = 0; i < M; ++i) {
        selected_names.push_back(eligible_participants[i].name);
    }

    sort(selected_names.begin(), selected_names.end());

    cout << M << endl;
    for (const auto &name : selected_names) {
        cout << name << endl;
    }

    return 0;
}