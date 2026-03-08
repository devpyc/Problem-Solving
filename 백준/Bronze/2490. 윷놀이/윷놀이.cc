#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=3;
    while (t--) {
        int arr[4];
        for (int i=0; i<4; i++) {
            cin>>arr[i];
        }
        if (count(arr,arr+4,0)==1) cout<<'A';
        else if (count(arr,arr+4,0)==2) cout<<'B';
        else if (count(arr,arr+4,0)==3) cout<<'C';
        else if (count(arr,arr+4,0)==4) cout<<'D';
        else cout<<'E';
        cout<<"\n";
    }
}