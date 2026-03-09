#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int numbers[10];
    map<int, int> frequency;
    for (int i = 0; i < 10; ++i) {
        cin >> numbers[i];
        frequency[numbers[i]]++;
    }
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += numbers[i];
    }
    int average = sum / 10;
    int mode = max_element(frequency.begin(), frequency.end(),
                           [](const pair<int, int>& a, const pair<int, int>& b) {
                               return a.second < b.second;
                           })->first;
    cout << average << '\n';
    cout << mode << '\n';
    return 0;
}
