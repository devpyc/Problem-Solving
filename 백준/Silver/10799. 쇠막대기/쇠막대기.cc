#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define pi pair<int, int>
#define mi map<int, int>
#define qi queue<int>
#define di deque<int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define endl "\n"
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
using namespace std;

int main()
{
    string s;
    cin>>s;

    stack<char>c;
    int ans=0;
    for(size_t i=0; i<s.length(); ++i){
        if(s[i]=='('){
            c.push('(');
        }else{
            c.pop();
            if(s[i-1]=='('){
                ans+=c.size();
            }else{
                ans+=1;
            }
        }
    }
    cout<<ans<<endl;
}