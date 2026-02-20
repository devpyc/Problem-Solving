#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long a,b,c;
    cin>>a>>b>>c;

    vector<int>arr[11];
    for (int i=1; i<=10; i++) {
        for (int j=1; j<=10; j++) {
            if (a*i+b*j==c) {
                arr[i].push_back(j);
            }
        }
    }

    for (int i=1; i<=10; i++) {
        if (arr[i].empty()) {
            cout<<0;
        }else {
            sort(arr[i].begin(),arr[i].end());
            for (int j=0; j<arr[i].size(); j++) {
                cout<<arr[i][j];
                if (j!=arr[i].size()-1) cout<<" ";
            }
        }
        cout<<"\n";
    }
}