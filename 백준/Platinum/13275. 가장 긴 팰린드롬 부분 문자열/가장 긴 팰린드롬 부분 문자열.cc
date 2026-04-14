#include <bits/stdc++.h>
using namespace std;

vector<int>manacher(const string &ans) {
    int n=ans.size()*2+1;
    vector<int>res(n);
    string s="#";
    for (auto i:ans) s+=i,s+="#";
    for (int i=0,p=-1,r=-1; i<n; i++) {
        res[i]=i<=r?min(r-i,res[2*p-i]):0;
        while (i-res[i]-1>=0&&i+res[i]+1<n&&s[i-res[i]-1]==s[i+res[i]+1]) res[i]++;
        if (i+res[i]>r) r=i+res[i],p=i;
    }
    return res;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;
    auto ans=manacher(s);
    cout<<*max_element(ans.begin(),ans.end());
}