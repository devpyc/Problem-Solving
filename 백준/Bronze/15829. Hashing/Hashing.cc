#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int r = 31;
const int M = 1234567891;

long long calculateHash(const string& s) {
    long long hash = 0;
    long long pow = 1;

    for (char c : s) {
        hash = (hash + (c - 'a' + 1) * pow) % M;
        pow = (pow * r) % M;
    }

    return hash;
}

int main() {
    int L;
    string s;

    cin >> L;
    cin >> s;

    long long hashValue = calculateHash(s);
    cout << hashValue << endl;

    return 0;
}