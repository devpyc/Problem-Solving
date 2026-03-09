#include <bits/stdc++.h>
#define ll long long
#define MOD 1'000'000'007
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<string>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    unordered_map<string,int>idx;
    idx.reserve(n);
    for (int i=0; i<n; i++) {
        idx[arr[i]]=i;
    }
    vector<int>cnt(n,0);

    string s;
    getline(cin,s);

    for (int i=0; i<n; i++) {
        getline(cin,s);
        istringstream iss(s);
        string c;
        while (iss>>c) {
            auto it=idx.find(c);
            if (it!=idx.end()) cnt[it->second]++;
        }
    }

    vector<pair<string,int>>res;
    res.reserve(n);
    for (int i=0; i<n; i++) {
        res.emplace_back(arr[i],cnt[i]);
    }
    sort(res.begin(),res.end(),[](auto &a, auto &b) {
        if (a.second!=b.second) return a.second>b.second;
        return a.first<b.first;
    });

    for (auto &p:res) {
        cout<<p.first<<" "<<p.second<<"\n";
    }
}