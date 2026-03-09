#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    string a="",b="";
    for(int i=0; i<x; i++){
        a+='1';
    }
    for(int i=0; i<y; i++){
        b+='1';
    }
    cout<<stoi(a)+stoi(b);
}