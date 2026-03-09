#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int SIZE = 9;

bool isValid(vector<vector<int>>& board, int row, int col, int num) {
    // 해당 숫자가 이미 행이나 열에 있는지 확인
    for (int i = 0; i < SIZE; ++i) {
        if (board[row][i] == num || board[i][col] == num) {
            return false;
        }
    }

    // 해당 숫자가 속한 3x3 서브그리드에 이미 있는지 확인
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}

bool solveSudoku(vector<vector<int>>& board) {
    for (int row = 0; row < SIZE; ++row) {
        for (int col = 0; col < SIZE; ++col) {
            if (board[row][col] == 0) {
                for (int num = 1; num <= SIZE; ++num) {
                    if (isValid(board, row, col, num)) {
                        board[row][col] = num;

                        if (solveSudoku(board)) {
                            return true;
                        }

                        // 현재 숫자를 놓았을 때 해결 방법이 없다면, 되돌아가기
                        board[row][col] = 0;
                    }
                }
                // 가능한 숫자를 찾지 못하면 되돌아가기
                return false;
            }
        }
    }

    // 보드 전체가 채워지면 해결 방법이 발견된 것
    return true;
}

int main() {
    vector<vector<int>> board(SIZE, vector<int>(SIZE, 0));

    // 초기 스도쿠 보드 입력
    for (int i = 0; i < SIZE; ++i) {
        string row;
        cin >> row;
        for (int j = 0; j < SIZE; ++j) {
            board[i][j] = row[j] - '0';
        }
    }

    // 스도쿠 퍼즐 해결
    solveSudoku(board);

    // 해결된 스도쿠 보드 출력
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << board[i][j];
        }
        cout << "\n";
    }
    return 0;
}