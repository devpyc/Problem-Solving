#include <bits/stdc++.h>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string d,w;
    getline(cin,d);
    getline(cin,w);
    
    int r=0;
    
    for(int i=0;i+(int)w.size()<=(int)d.size();){
        if(d.compare(i,w.size(),w)==0){
            r++;
            i+=w.size();
        }else{
            i++;
        }
    }
    cout<<r<<"\n";
}