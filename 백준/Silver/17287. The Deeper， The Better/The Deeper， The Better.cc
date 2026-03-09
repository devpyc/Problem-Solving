#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int calculateScore(const stack<int>& scoreStack) {
    int currentScore = 0;
    stack<int> tempStack = scoreStack;
    while (!tempStack.empty()) {
        currentScore += tempStack.top();
        tempStack.pop();
    }
    return currentScore;
}

int32_t main() {
    string S;
    cin >> S;

    stack<int> scoreStack;
    int maxScore = 0;

    for (char ch : S) {
        if (ch == '[') {
            scoreStack.push(3);
        } else if (ch == '{') {
            scoreStack.push(2);
        } else if (ch == '(') {
            scoreStack.push(1);
        } else if (ch == ']') {
            scoreStack.pop();
        } else if (ch == '}') {
            scoreStack.pop();
        } else if (ch == ')') {
            scoreStack.pop();
        } else if (isdigit(ch)) {
            int currentScore = calculateScore(scoreStack);
            maxScore = max(maxScore, currentScore);
        }
    }

    cout << maxScore << endl;

    return 0;
}