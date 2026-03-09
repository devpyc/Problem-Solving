#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll m,n;
    cin>>m;
    while(cin>>n){
        if(n==0) {
            break;
        }
        if(n%m==0){
            cout<<n<<" is a multiple of "<<m<< "."<<"\n";
        }
        if(n%m!=0){
            cout<<n<<" is NOT a multiple of "<<m<<"."<<"\n";
        }
    }
}