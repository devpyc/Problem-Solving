#include <bits/stdc++.h>
using namespace std;

int main() {
    string mingo;
    int N;
    cin >> mingo >> N;
    vector<string> candidates(N);
    for (int i = 0; i < N; ++i) {
        cin >> candidates[i];
    }

    int max_score = -1;
    string answer;

    for (const string& candidate : candidates) {
        string combined = mingo + candidate;
        int L = 0, O = 0, V = 0, E = 0;
        for (char c : combined) {
            switch (c) {
                case 'L': L++; break;
                case 'O': O++; break;
                case 'V': V++; break;
                case 'E': E++; break;
            }
        }

        long long score = (L + O);
        score *= (L + V);
        score *= (L + E);
        score *= (O + V);
        score *= (O + E);
        score *= (V + E);
        int current_score = score % 100;

        if (current_score > max_score) {
            max_score = current_score;
            answer = candidate;
        } else if (current_score == max_score) {
            if (candidate < answer) {
                answer = candidate;
            }
        }
    }

    cout << answer << endl;

    return 0;
}