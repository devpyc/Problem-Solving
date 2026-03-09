#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    vector<vector<int>> triangle(n, vector<int>(n,0));

    for(int i=0; i<n; ++i){
        for(int j=0; j<=i; ++j){
            cin>>triangle[i][j];
        }
    }

    for(int i=1; i<n; ++i){
        for(int j=0; j<=i; ++j){
            if(j==0){
                triangle[i][j]+=triangle[i-1][j];
            }
            else if(j==i){
                triangle[i][j]+=triangle[i-1][j-1];
            }
            else{
                triangle[i][j]+=max(triangle[i-1][j-1],triangle[i-1][j]);
            }
        }
    }
    int maxSum=0;
    for(int i=0; i<n; ++i){
        maxSum=max(maxSum,triangle[n-1][i]);
    }
    cout<<maxSum<<"\n";

    return 0;
}