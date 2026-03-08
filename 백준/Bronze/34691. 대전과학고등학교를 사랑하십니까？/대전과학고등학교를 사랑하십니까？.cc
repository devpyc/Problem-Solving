#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    map<string,string>m={{"animal","Panthera tigris"},{"tree","Pinus densiflora"},{"flower","Forsythia koreana"}};

    while (true) {
        string s;
        cin>>s;
        if (s=="end") return 0;
        cout<<m[s]<<"\n";
    }
}