#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n,i,odd=0;
    cin>>n;
    if(n%2==1){
        odd=1;
        n--;
    }
    while(n){
        if(n%2==0) cout<<"1 ";
        else cout<<"2 ";
        n--;
    }
    if(odd){
        cout<<"3 ";
    }
}