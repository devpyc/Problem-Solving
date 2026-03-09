#include <iostream>
using namespace std;

int n, m;
int a[100001];

bool check(long long mid) {
   int cnt = 1;
   long long sum = 0;
   
   for(int i = 0; i < n; i++) {
       if(sum + a[i] > mid) {
           cnt++;
           sum = a[i];
       }
       else sum += a[i];
   }
   return cnt <= m;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   cin >> n >> m;
   
   long long l = 0, r = 0;
   for(int i = 0; i < n; i++) {
       cin >> a[i];
       r += a[i];
       l = max(l, (long long)a[i]);
   }
   
   while(l <= r) {
       long long mid = (l + r) / 2;
       if(check(mid)) r = mid - 1;
       else l = mid + 1;
   }
   
   cout << l;
   return 0;
}