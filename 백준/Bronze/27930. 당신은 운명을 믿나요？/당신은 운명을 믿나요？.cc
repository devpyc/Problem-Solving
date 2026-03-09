#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;

    string a="YONSEI";
    string b="KOREA";

    int cnt1=0;
    int cnt2=0;

    for (int i=0; i<s.length(); i++) {
        if (cnt1<a.length()&&s[i]==a[cnt1]) {
            cnt1++;
            if (cnt1==a.length()) {
                cout<<"YONSEI";
                return 0;
            }
        }

        if (cnt2<b.length()&&s[i]==b[cnt2]) {
            cnt2++;
            if (cnt2==b.length()) {
                cout<<"KOREA";
                return 0;
            }
        }
    }
}