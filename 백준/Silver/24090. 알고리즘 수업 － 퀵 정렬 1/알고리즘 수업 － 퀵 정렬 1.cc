#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll N, K;
ll count_swap = 0;
ll Kth_swap_first = -1;
ll Kth_swap_second = -1;
bool found = false;
vector<ll> A;

ll partition_func(int p, int r){
    if(found) return 0;
    ll x = A[r];
    int i = p -1;
    for(int j = p; j <= r -1; j++){
        if(A[j] <= x){
            i +=1;
            count_swap +=1;
            if(count_swap == K){
                Kth_swap_first = A[i];
                Kth_swap_second = A[j];
                found = true;
            }
            swap(A[i], A[j]);
            if(found) return 0;
        }
    }
    if(i +1 != r){
        count_swap +=1;
        if(count_swap == K){
            Kth_swap_first = A[i+1];
            Kth_swap_second = A[r];
            found = true;
        }
        swap(A[i +1], A[r]);
    }
    return i +1;
}

void quick_sort(int p, int r){
    if(p < r && !found){
        ll q = partition_func(p, r);
        quick_sort(p, q -1);
        quick_sort(q +1, r);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> K;
    A.resize(N);
    for(int i=0; i<N; i++) cin >> A[i];

    quick_sort(0, N-1);

    if(found){
        if(Kth_swap_first < Kth_swap_second){
            cout << Kth_swap_first << ' ' << Kth_swap_second;
        }
        else{
            cout << Kth_swap_second << ' ' << Kth_swap_first;
        }
    }
    else{
        cout << -1;
    }
}