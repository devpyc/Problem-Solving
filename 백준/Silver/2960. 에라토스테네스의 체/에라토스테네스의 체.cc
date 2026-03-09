#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, k;
   cin >> n >> k;
   
   vector<bool> p(n+1, true);
   int c = 0;
   
   for(int i = 2; i <= n; i++) {
       if(p[i]) {
           for(int j = i; j <= n; j += i) {
               if(p[j]) {
                   p[j] = false;
                   c++;
                   if(c == k) {
                       cout << j << "\n";
                       return 0;
                   }
               }
           }
       }
   }
   
   return 0;
}