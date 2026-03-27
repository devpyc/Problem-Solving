#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int,int>>arr={{390, 540},
    {590, 600},
    {650, 660},
    {710, 720},
    {770, 830},
    {880, 890},
    {940, 950},
    {1000, 1370}};
    cin.tie(0)->sync_with_stdio(0);

    int h,m;
    cin>>h>>m;

    int ans=h*60+m;
    bool check=false;
    for (auto i:arr) {
        if (ans>=i.first&&ans<=i.second) check=true;
    }
    cout<<(check?"Yes":"No");
}