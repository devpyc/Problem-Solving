#include <bits/stdc++.h>
using namespace std;
int kth(vector<int> &a, int k) {
    static mt19937 rng(123456);
    shuffle(a.begin(), a.end(), rng);
    nth_element(a.begin(),a.begin()+(k-1),a.end());
    return a[k-1];
}