#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a;
    cin>>a;
    if (a>=90)cout<<"A";
    else if (a>=80)cout<<"B";
    else if (a>=70)cout<<"C";
    else if (a>=60)cout<<"D";
    else cout<<"F";
}