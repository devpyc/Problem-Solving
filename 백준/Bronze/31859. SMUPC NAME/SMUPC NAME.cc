#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
    int N;
    string S;
    cin >> N >> S;

    unordered_set<char> seen;
    string uniqueChars;
    int duplicateCount = 0;
    
    for (char c : S) {
        if (seen.find(c) == seen.end()) {
            uniqueChars += c;
            seen.insert(c);
        } else {
            duplicateCount++;
        }
    }
    
    uniqueChars += to_string(duplicateCount + 4);
    uniqueChars = to_string(N + 1906) + uniqueChars;
    
    reverse(uniqueChars.begin(), uniqueChars.end());
    
    string smupcName = "smupc_" + uniqueChars;
    cout << smupcName << endl;

    return 0;
}