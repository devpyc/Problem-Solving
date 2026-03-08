#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    while (getline(cin,s)) {
        if (s=="#") return 0;
        map<char,int>arr;
        for (char c:s) {
            if (isalpha(c)) {
                c=tolower(c);
                arr[c]++;
            }
        }
        cout<<arr.size()<<"\n";
    }
}