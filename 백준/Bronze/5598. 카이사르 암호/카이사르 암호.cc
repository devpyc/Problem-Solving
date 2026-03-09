#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
    string s;
    string d= "";
    cin>>s;
    for(char c:s){
        if(c>='D' && c<='Z'){
            d+=(c-3);
        }else{
            d+=(c-3+26);
        }
    }
    cout<<d<<endl;
}