#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> ans;
    auto it=max_element(arr.begin(),arr.end());
    ans.push_back(*it);
    ans.push_back(it-arr.begin());
    return ans;
}