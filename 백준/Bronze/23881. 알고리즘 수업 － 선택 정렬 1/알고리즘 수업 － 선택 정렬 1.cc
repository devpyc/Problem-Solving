#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    int arr[10001];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int count = 0;

    for(int i = N-1; i > 0; i--) {
        int maxIdx = i;
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }

        if(maxIdx != i) {
            count++;
            if(count == K) {
                cout << min(arr[i], arr[maxIdx]) << " " << max(arr[i], arr[maxIdx]);
                return 0;
            }
            swap(arr[i], arr[maxIdx]);
        }
    }

    cout << -1;
    return 0;
}