#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum;
    int a[9];
    cin>>sum;
    for(int i=0; i<9; i++){
        cin>>a[i];
        sum-=a[i];
    }
    cout<<sum<<endl;
}