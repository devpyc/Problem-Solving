#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define pii pair<int,int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvvi vector<vector<vector<int>>>
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define MOD 1000000007
using namespace std;

bool isSub(const string& str, const vector<string>& s) {
    for (const auto& seq : s) {
        if (seq.find(str) == string::npos) {
            return false;
        }
    }
    return true;
}

string solve(const vector<string>& s) {
    int n = s.size();
    string ref = s[0];
    int len = ref.length();
    string ans = "";

    for (int length = 3; length <= len; ++length) {
        for (int start = 0; start <= len - length; ++start) {
            string substring = ref.substr(start, length);
            if (isSub(substring, s)) {
                if (substring.length() > ans.length() ||
                    (substring.length() == ans.length() && substring < ans)) {
                    ans = substring;
                }
            }
        }
    }

    return ans.empty() ? "no significant commonalities" : ans;
}

signed main() {
    io;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;

        vector<string> s(m);
        for (int j = 0; j < m; ++j) {
            cin >> s[j];
        }

        string result = solve(s);
        cout << result << endl;
    }

    return 0;
}