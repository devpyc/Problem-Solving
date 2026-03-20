#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<int> solution(vector<string> operations) {
    ordered_set<pair<int, int>> pq;
    int idx = 0;
    
    for (const string& op : operations) {
        stringstream ss(op);
        char cmd;
        int x;
        ss >> cmd >> x;
        
        if (cmd == 'I') {
            pq.insert({x, idx++});
        } 
        else if (cmd == 'D') {
            if (pq.empty()) continue;
            
            if (x == -1) {
                pq.erase(pq.find_by_order(0));
            } else if (x == 1) {
                pq.erase(pq.find_by_order((int)pq.size() - 1));
            }
        }
    }
    
    if (pq.empty()) return {0, 0};
    
    int mx = pq.find_by_order((int)pq.size() - 1)->first;
    int mn = pq.find_by_order(0)->first;
    
    return {mx, mn};
}