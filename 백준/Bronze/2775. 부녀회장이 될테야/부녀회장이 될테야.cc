#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    int arr[15][15];
    for (int i=0; i<15; i++) {
        arr[0][i]=i;
    }

    for (int i=0; i<15; i++) {
        arr[i][0]=0;
    }

    for (int i=1; i<15; i++) {
        for (int j=1; j<15; j++) {
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
    while (t--) {
        int n,k;
        cin>>n>>k;
        cout<<arr[n][k]<<"\n";
    }
}