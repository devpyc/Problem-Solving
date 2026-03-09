#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int count_bubble_sort_swaps(vector<int>& arr) {
    int n = arr.size();
    int swap_count = 0;
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swap_count++;
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
    return swap_count;
}

int minimum_operations_to_sort(vector<int>& A) {
    vector<int> normal_A = A;
    int normal_swaps = count_bubble_sort_swaps(normal_A);
    
    vector<int> reversed_A = A;
    reverse(reversed_A.begin(), reversed_A.end());
    int reverse_swaps = count_bubble_sort_swaps(reversed_A) + 1;
    
    return min(normal_swaps, reverse_swaps);
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    cout << minimum_operations_to_sort(A) << '\n';

    return 0;
}