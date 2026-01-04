#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string ss) {
    vector<int>arr;
    for(int i=0; i<ss.size(); i++){
        if(!isalpha(ss[i])) arr.push_back(ss[i]-48);
    }
    sort(arr.begin(),arr.end());
    return arr;
}