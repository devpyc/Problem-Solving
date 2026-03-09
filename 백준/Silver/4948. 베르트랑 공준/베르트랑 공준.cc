#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

bool isPrime(int num){
    if(num<2){
        return false;
    } if(num==2){
        return true;
    } if(num%2==0){
        return false;
    }

    int sqrt_num=(int)sqrt(num);
    for(int i=3; i<=sqrt_num; i+=2){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int32_t main()
{
    int n;
    while(true){
        cin>>n;
        if(n==0){
            break;
        }
        int cnt=0;
        for(int i=n+1; i<=2*n; ++i){
            if(isPrime(i)){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}