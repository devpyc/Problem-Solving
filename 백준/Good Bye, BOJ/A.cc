// 왼쪽 \, 가운데 < 오른쪽 > 순서대로 찍기
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    int a=n*2,b=n*4+2;

    for (int i=0; i<a; i++) {
        string s(b,' ');
        s[n*2-1-i]='*';
        if (i<n) s[n*3-i]='*';
        else s[n+1+i]='*';

        if (i<n) s[n*3+2+i]='*';
        else s[n*5+1-i]='*';
        cout<<s<<"\n";
    }
}