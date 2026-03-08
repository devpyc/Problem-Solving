#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[5];
    int avg=0;
    for(int i=0; i<5; i++) {
        cin>>arr[i];
        avg+=arr[i];
    }
    sort(arr,arr+5);
    cout<<avg/5<<"\n"<<arr[2];
}