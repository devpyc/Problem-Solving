#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    double per = (double)m / n * 24;

    int H = (int)per;
    int M = (int)((per - H) * 60);

    cout<<setfill('0')<<setw(2)<<H<<":"<<setfill('0')<<setw(2)<<M<<"\n";
}