#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int num[n];
    int count=0;

    for(int i=0; i<n; i++){
        cin>>num[i];
        if(is_prime(num[i])==true){
            count++;
        }
    }
    cout<<count;
}