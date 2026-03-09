#include <iostream>
#include <vector>
using namespace std;

vector<int> inOrder;   // 중위 순회 결과 저장
vector<int> postOrder; // 후위 순회 결과 저장

void getPreOrder(int inStart, int inEnd, int postStart, int postEnd) {
    if (inStart > inEnd || postStart > postEnd) {
        return;
    }

    int root = postOrder[postEnd];
    cout << root << " ";

    // 중위 순회에서 루트의 위치를 찾음
    int rootIdx;
    for (int i = inStart; i <= inEnd; ++i) {
        if (inOrder[i] == root) {
            rootIdx = i;
            break;
        }
    }

    // 왼쪽 서브트리 호출
    getPreOrder(inStart, rootIdx - 1, postStart, postStart + (rootIdx - inStart) - 1);
    // 오른쪽 서브트리 호출
    getPreOrder(rootIdx + 1, inEnd, postStart + (rootIdx - inStart), postEnd - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    inOrder.resize(n);
    postOrder.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> inOrder[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> postOrder[i];
    }
    getPreOrder(0, n - 1, 0, n - 1);

    return 0;
}