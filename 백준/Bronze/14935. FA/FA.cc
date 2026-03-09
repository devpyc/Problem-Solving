#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define io ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

ll F(const string& x){
    int first_digit=x[0]-'0';
    int num_digit=x.length();
    return first_digit*num_digit;
}

bool isFA(const string& x){
    set<ll> seen;
    string cur=x;

    while(true){
        ll ans=F(cur);
        if(seen.count(ans)>0){
            return true;
        }
        seen.insert(ans);
        cur=to_string(ans);
    }
    return false;
}

int main(){
    io;
    string x;
    cin>>x;

    if(isFA(x)){
        cout<<"FA"<<endl;
    }else{
        cout<<"NFA"<<endl;
    }
}