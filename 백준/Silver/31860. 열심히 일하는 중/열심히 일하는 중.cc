#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
    int N, M, K;
    cin >> N >> M >> K;

    priority_queue<int> pq;
    for (int i = 0; i < N; ++i) {
        int importance;
        cin >> importance;
        pq.push(importance);
    }

    vector<int> satisfaction;
    int prev_satisfaction = 0;

    while (!pq.empty()) {
        int highest_importance = pq.top();
        pq.pop();
        
        int today_satisfaction = floor(prev_satisfaction / 2) + highest_importance;
        satisfaction.push_back(today_satisfaction);
        
        highest_importance -= M;
        if (highest_importance > K) {
            pq.push(highest_importance);
        }
        
        prev_satisfaction = today_satisfaction;
    }
    
    cout << satisfaction.size() << endl;
    for (int s : satisfaction) {
        cout << s << endl;
    }

    return 0;
}