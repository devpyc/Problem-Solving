#include <iostream>
#include <cstring>

using namespace std;

const int MOD = 1e9;

int N;
int dp[101][10][1 << 10];

int countStairNumbers(int length, int lastDigit, int bitmask) {
    if (length == 0) {
        // 길이가 0이면서 모든 숫자가 등장한 경우 1을 반환, 아니면 0을 반환
        return bitmask == (1 << 10) - 1 ? 1 : 0;
    }

    int &result = dp[length][lastDigit][bitmask];
    if (result != -1) {
        return result;
    }

    result = 0;

    // 한 칸 앞으로 이동
    if (lastDigit - 1 >= 0) {
        result = (result + countStairNumbers(length - 1, lastDigit - 1, bitmask | (1 << (lastDigit - 1)))) % MOD;
    }

    // 한 칸 뒤로 이동
    if (lastDigit + 1 <= 9) {
        result = (result + countStairNumbers(length - 1, lastDigit + 1, bitmask | (1 << (lastDigit + 1)))) % MOD;
    }

    return result;
}

int main() {
    cin >> N;

    // dp 배열 초기화
    memset(dp, -1, sizeof(dp));

    int answer = 0;
    for (int i = 1; i <= 9; ++i) {
        // 각 숫자로 시작하는 계단 수 경우의 수를 더함
        answer = (answer + countStairNumbers(N - 1, i, 1 << i)) % MOD;
    }

    cout << answer << endl;

    return 0;
}