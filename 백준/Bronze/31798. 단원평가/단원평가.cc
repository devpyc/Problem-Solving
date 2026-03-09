#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
//----------------------------------------
int32_t main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(c==0){
        cout<<sqrt(a+b)<<endl;
    }else if(a==0){
        cout<<c*c-b<<endl;
    }else{
        cout<<c*c-a<<endl;
    }
}
//----------------------------------------