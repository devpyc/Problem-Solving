#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_diff = arr[1] - arr[0];
    for (int i = 2; i < n; i++) {
        min_diff = gcd(min_diff, arr[i] - arr[i-1]);
    }

    int cnt = 0;
    for (int i = 1; i < n; i++) {
        cnt += (arr[i] - arr[i-1]) / min_diff - 1;
    }

    cout << cnt << endl;
}