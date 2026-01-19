#include <bits/stdc++.h>
using namespace std;

string solution(vector<int> numbers) {
    vector<string> s(numbers.size());
    for (int i = 0; i < (int)numbers.size(); i++) s[i] = to_string(numbers[i]);

    vector<int> idx(numbers.size());
    iota(idx.begin(), idx.end(), 0);

    sort(idx.begin(), idx.end(), [&](int i, int j) {
        return s[i] + s[j] > s[j] + s[i];
    });

    if (!idx.empty() && s[idx[0]] == "0") return "0";

    string ans;
    for (int i : idx) ans += s[i];
    return ans;
}