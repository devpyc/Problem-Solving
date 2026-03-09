#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    string S_bases, S_bits, R_bases, R_bits;
    cin >> S_bases >> S_bits >> R_bases >> R_bits;
    
    string new_key = "";
    
    for(int i=0;i<N;i++){
        if(S_bases[i] == R_bases[i]){
            if(S_bits[i] != R_bits[i]){
                cout << "htg!";
                return 0;
            }
            new_key += S_bits[i];
        }
    }
    cout << new_key;
}