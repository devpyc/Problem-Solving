#include <bits/stdc++.h>
#define ll long long
#define x first
#define y second
#define endl "\n"
using namespace std;

int main(){
    int a[4],b[2];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1];

    sort(a,a+4);
    sort(b,b+2);
    cout<<a[3]+a[2]+a[1]+b[1];
}