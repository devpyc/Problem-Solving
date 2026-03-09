#include <bits/stdc++.h>
#define ll long long
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    io;
    string s;
    while(1){
        getline(cin,s);
        if(s=="END")break;
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}