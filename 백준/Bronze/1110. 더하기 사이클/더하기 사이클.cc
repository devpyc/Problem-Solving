#include<iostream>
using namespace std;
int main() {
    int n = 0;
    int cnt = 0;
    cin >> n;
    int x = n/10;
    int y = n%10;
    int tmp = y*10+(x+y)%10;
    cnt++;
    while(tmp!= n){
        x = tmp/10;
        y = tmp%10;
        tmp = y*10+(x+y)%10;
        cnt++;
    }
    cout<<cnt;
    return 0;
}