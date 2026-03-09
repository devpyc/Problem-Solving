#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m,k;
int32_t main(){
    cin>>n>>m;
    if(n==2){
        if(m>18){
            cout<<"After";
        }else if(m<18){
            cout<<"Before";
        }else{
            cout<<"Special";
        }
    }else if(n>2){
        cout<<"After";
    }else if(n<2){
        cout<<"Before";
    }
}