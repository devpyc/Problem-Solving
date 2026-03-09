#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,m,p;
    cin>>n>>m;
    cin>>p;

    ll sum=n+m;

    if(sum-p*2>=0){
        cout<<sum-p*2;
    }else{
        cout<<sum;
    }
}