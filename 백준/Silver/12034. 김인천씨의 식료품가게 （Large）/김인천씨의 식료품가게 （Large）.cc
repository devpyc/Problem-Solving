#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    for(int tc=1; tc<=T; tc++){
        int N;
        cin >> N;
        
        vector<long long> arr(2*N);
        
        for(int i=0;i<2*N;i++) cin >> arr[i];
        
        map<long long,int> freq;
        
        for(auto &x: arr) freq[x]++;
        
        vector<long long> ans;
        
        for(auto &x: arr){
            if(freq[x]==0) continue;
            
            long long orig = (4LL*x)/3LL;
            ans.push_back(x);
            
            freq[x]--;
            freq[orig]--;
        }
        cout<<"Case #"<<tc<<": ";
        
        for(int i=0;i<N;i++){
            cout<<ans[i];
            if(i<N-1) cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}