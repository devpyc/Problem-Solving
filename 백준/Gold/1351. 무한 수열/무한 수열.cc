#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<long long, long long> memo;

long long calculate_A(long long N, long long P, long long Q) {
    if (N == 0) return 1;

    if (memo.find(N) != memo.end()) {
        return memo[N];
    }

    long long Ai = calculate_A(N / P, P, Q) + calculate_A(N / Q, P, Q);
    memo[N] = Ai;

    return Ai;
}

int main() {
    // 입력 받기
    long long N, P, Q;
    cin >> N >> P >> Q;

    // 결과 출력
    long long result = calculate_A(N, P, Q);
    cout << result << endl;

    return 0;
}