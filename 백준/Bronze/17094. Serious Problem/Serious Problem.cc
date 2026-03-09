#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt2=0,cnte=0;
    for(int i=0; i<n; i++){
        if(s[i]=='2'){
            cnt2++;
        }else{
            cnte++;
        }
    }
    if(cnt2>cnte){
        cout<<2;
    }else if(cnt2<cnte){
        cout<<"e";
    }else{
        cout<<"yee";
    }
}