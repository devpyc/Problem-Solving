#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n<<" is even"<<endl;
        } else{
            cout<<n<<" is odd"<<endl;
        }
    }
}