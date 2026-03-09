#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

struct Lecture {
    int start, end, num;
};

bool cmp(const Lecture& a, const Lecture& b) {
    return a.start < b.start;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<Lecture> lectures(n);
    for (int i = 0; i < n; i++) {
        cin >> lectures[i].num >> lectures[i].start >> lectures[i].end;
    }
    sort(lectures.begin(), lectures.end(), cmp);

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(lectures[0].end);

    for (int i = 1; i < n; i++) {
        if (pq.top() <= lectures[i].start) {
            pq.pop();
        }
        pq.push(lectures[i].end);
    }

    cout << pq.size() << endl;
    return 0;
}