#include <bits/stdc++.h>
#define ll long long
using namespace std;


struct SegmentTree {
    vector<ll> tree, lazy;
    int size;

    SegmentTree(int n) {
        size = 1;
        while (size < n) size *= 2;
        tree.resize(2 * size);
        lazy.resize(2 * size);
    }

    void propagate(int node, int start, int end) {
        if (lazy[node] != 0) {
            tree[node] += (end - start + 1) * lazy[node];
            if (start != end) {
                lazy[node * 2] += lazy[node];
                lazy[node * 2 + 1] += lazy[node];
            }
            lazy[node] = 0;
        }
    }

    void update_range(int node, int start, int end, int left, int right, ll diff) {
        propagate(node, start, end);
        if (left > end || right < start) return;
        if (left <= start && end <= right) {
            tree[node] += (end - start + 1) * diff;
            if (start != end) {
                lazy[node * 2] += diff;
                lazy[node * 2 + 1] += diff;
            }
            return;
        }
        int mid = (start + end) / 2;
        update_range(node * 2, start, mid, left, right, diff);
        update_range(node * 2 + 1, mid + 1, end, left, right, diff);
        tree[node] = tree[node * 2] + tree[node * 2 + 1];
    }

    ll query(int node, int start, int end, int idx) {
        propagate(node, start, end);
        if (start == end) return tree[node];
        int mid = (start + end) / 2;
        if (idx <= mid) return query(node * 2, start, mid, idx);
        else return query(node * 2 + 1, mid + 1, end, idx);
    }

    void update(int left, int right, ll diff) {
        update_range(1, 0, size - 1, left, right, diff);
    }

    ll get(int idx) {
        return query(1, 0, size - 1, idx);
    }
};

ll solve(ll cars, ll lanes) {
    ll base_cars = cars / lanes;
    ll extra_cars = cars % lanes;
    ll burden = (lanes - extra_cars) * base_cars * base_cars;
    burden += extra_cars * (base_cars + 1) * (base_cars + 1);
    return burden;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<ll> lanes(N - 1);
    for (int i = 0; i < N - 1; ++i) {
        cin >> lanes[i];
    }

    SegmentTree st(N - 1);

    for (int i = 0; i < M; ++i) {
        int u, v;
        ll x;
        cin >> u >> v >> x;
        --u; --v;
        st.update(u, v - 1, x);
    }

    for (int i = 0; i < N - 1; ++i) {
        ll road_usage = st.get(i);
        cout << solve(road_usage, lanes[i]) << "\n";
    }

    return 0;
}