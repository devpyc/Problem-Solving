#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

vector<string> t;
int p = 0;

string pb();
string ps();

string pi() {
    string r = "if ";
    p++;
    r += pb();

    if (p < t.size() && t[p] == "else") {
        r += " else ";
        p++;
        r += pb();
    }

    return r;
}

string pb() {
    string r = "{ ";
    if (t[p] == "{") {
        p++;
        while (p < t.size() && t[p] != "}") {
            r += ps() + " ";
        }
        p++;
    } else {
        r += ps() + " ";
    }
    r += "}";
    return r;
}

string ps() {
    if (t[p] == ";") {
        p++;
        return ";";
    } else if (t[p] == "if") {
        return pi();
    }
    return "";
}

int main() {
    string l;
    getline(cin, l);

    istringstream is(l);
    string tk;
    while (is >> tk) {
        t.push_back(tk);
    }

    string r;
    while (p < t.size() && t[p] != "end") {
        r += ps() + " ";
    }
    r += "end";

    cout << r << endl;

    return 0;
}