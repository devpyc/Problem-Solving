// BFS(깊이 우선 탐색) 구현
// 비내림차순은 같은 값도 포함하는 정렬
// 비내림차순을 유지하기 위해 정렬된 순서로 탐색하도록 구현

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int N, int M, int depth, vector<int>& sequence, vector<int>& numbers) {
    if (depth == M) {
        for (int i = 0; i < M; ++i) {
            cout << sequence[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < N; ++i) {
        if (depth == 0 || (depth > 0 && sequence[depth - 1] <= numbers[i])) {
            sequence[depth] = numbers[i];
            dfs(N, M, depth + 1, sequence, numbers);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end()); // 비내림차순을 위해 정렬

    vector<int> sequence(M);
    dfs(N, M, 0, sequence, numbers);

    return 0;
}