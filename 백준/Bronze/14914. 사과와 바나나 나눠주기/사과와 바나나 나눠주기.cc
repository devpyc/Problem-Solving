#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    for(int i = 1; i <= min(a, b); i++){
        if(a % i == 0 && b % i == 0)
            cout << i << " " << a / i << " " << b / i << "\n";
    }
    return 0;
}