#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    int n;
    while(1){
        cin>>n;
        if(n==0){
            break;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i>=j){
                    cout<<"*";
                }
            }
            cout<<endl;
        }
    }
}