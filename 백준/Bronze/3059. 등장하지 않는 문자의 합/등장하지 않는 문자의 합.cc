#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    for(int i=0; i<t; i++) {
        string s;
        cin>>s;
        int arr[26]={0};
        int cnt=0;
        for(int i=0; i<s.length(); i++) {
            cnt=s[i]-65;
            arr[cnt]++;
        }
        int ans=0;
        for(int j=0; j<26; j++) {
            if(arr[j]==0) {
                ans+=j+65;
            }
        }
        cout<<ans<<"\n";
    }
}