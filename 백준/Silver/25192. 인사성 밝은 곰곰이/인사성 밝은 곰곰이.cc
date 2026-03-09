#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    string s;
    set<string>name;

    int cnt=0;

    for(int i=0; i<n; i++){
        cin>>s;
        if(s=="ENTER"){
            cnt+=name.size();
            name.clear();
        }else{
            name.insert(s);
        }
    }
    cnt+=name.size();
    cout<<cnt<<"\n";
}