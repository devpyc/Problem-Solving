#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
    string encrypted;
    cin >> encrypted;
    
    string prefix = "CHICKENS";
    
    int key = encrypted[0] ^ prefix[0];
    for (int i = 1; i < 8; ++i) {
        key = encrypted[i] ^ prefix[i];
    }
    
    string decrypted;
    for (char c : encrypted) {
        decrypted += c ^ key;
    }
    
    cout << decrypted << endl;

    return 0;
}