#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin>>n;
    size_t s=n.length();

    if(s==2) {
        int a = n[0] - '0';
        int b = n[1] - '0';
        cout<<a+b<<endl;
    }else if (s == 3) {
        if (n[1] == '0') {
            int a = 10;
            int b = n[2] - '0';
            cout << a + b << endl;
        } else {
            int a = n[0] - '0';
            int b = 10;
            cout << a + b << endl;
        }
    } else if (s == 4) {
        cout << 20 << endl;
    }
}