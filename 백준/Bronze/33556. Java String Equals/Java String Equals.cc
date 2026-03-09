#include <bits/stdc++.h>
using namespace std;

string solve(const string &s) {
    string ret = s;
    transform(ret.begin(), ret.end(), ret.begin(), ::tolower);
    return ret;
}

int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);

    bool isNull1 = (a == "null");
    bool isNull2 = (b == "null");

    if(isNull1) {
        cout << "NullPointerException" << "\n";
    } else {
        if(isNull2)
            cout << "false" << "\n";
        else
            cout << (a == b ? "true" : "false") << "\n";
    }

    if(isNull1) {
        cout << "NullPointerException" << "\n";
    } else {
        if(isNull2)
            cout << "false" << "\n";
        else {
            cout << (solve(a) == solve(b) ? "true" : "false") << "\n";
        }
    }
}