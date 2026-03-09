#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);

    if(s[0]=='\"'&&s[s.size()-1]=='\"'){
        s=s.substr(1,s.size()-2);
        if(s.size()==0) cout<<"CE";
        else cout<<s;
    }else{
        cout<<"CE";
    }
}