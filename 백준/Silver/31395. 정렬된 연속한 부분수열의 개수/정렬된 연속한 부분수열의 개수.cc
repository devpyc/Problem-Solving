#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    long long result = 0;
    int left = 0;
    int right = 0;

    while (right < N) {
        if (A[right] < A[right - 1]) {
            left = right;
        }
        
        result += right - left + 1;

        right++;
    }
    cout << result << endl;

    return 0;
}