#include <bits/stdc++.h>
using namespace std;

int main(){
int n,m,a;
cin>>n;
int arr[n];
for (int i=0; i<n; i++){
cin>>arr[i];
}
cin>>m;
int ans=0;
while(m--){
cin>>a;
ans+=arr[a-1];
}
cout<<ans<<endl;
}