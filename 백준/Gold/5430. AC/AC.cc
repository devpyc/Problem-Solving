#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;

    while (t--) {
        string s;
        cin>>s;

        int n;
        cin>>n;
        string x;
        cin>>x;
        deque<int>arr;
        int num=0;
        bool check = false;

        for (char c:x) {
            if (isdigit(c)) {
                num=num*10+(c-'0');
                check=true;
            } else {
                if (check) {
                    arr.push_back(num);
                    num=0;
                    check=false;
                }
            }
        }
        bool reverse=false;
        bool check2=true;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='R') {
                reverse=!reverse;
            }else {
                if (arr.empty()) {
                    cout<<"error\n";
                    check2=false;
                    break;
                }
                if (!reverse) arr.pop_front();
                else arr.pop_back();
            }
        }
        if (!check2) continue;
        cout<<"[";
        while (!arr.empty()) {
            if (!reverse) {
                cout<<arr.front();
                arr.pop_front();
            }else {
                cout<<arr.back();
                arr.pop_back();
            }
            if (!arr.empty()) cout<<",";
        }
        if (check2) cout<<"]\n";
    }
}