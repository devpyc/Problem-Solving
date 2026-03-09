#include <bits/stdc++.h>
#define endl "\n"
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    io;
    string s;
    cin>>s;
    unordered_map<char,int>cnt;
    for(char c:s){
        cnt[c]++;
    }
    int odd=0;
    char odd_ch;
    for(auto& pair:cnt){
        if(pair.second%2!=0){
            odd++;
            odd_ch=pair.first;
        }
    }

    if(odd>1){
        cout<<"I'm Sorry Hansoo"<<endl;
        return 0;
    }
    string pal="";
    for(auto& pair:cnt){
        pal+=string(pair.second/2,pair.first);
    }

    sort(pal.begin(),pal.end());

    string ans=pal;
    if(odd==1){
        ans+=odd_ch;
    }
    reverse(pal.begin(),pal.end());
    ans+=pal;

    cout<<ans<<endl;
}