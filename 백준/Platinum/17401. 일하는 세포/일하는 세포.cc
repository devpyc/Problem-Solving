#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

const int MOD = 1000000007;

class Matrix {
public:
    int size;
    vector<vector<long long>> mat;

    Matrix(int n) : size(n), mat(n, vector<long long>(n, 0)) {}

    Matrix operator*(const Matrix &other) const {
        Matrix product(size);
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                for (int k = 0; k < size; ++k) {
                    product.mat[i][j] = (product.mat[i][j] + mat[i][k] * other.mat[k][j]) % MOD;
                }
            }
        }
        return product;
    }

    static Matrix identity(int n) {
        Matrix id(n);
        for (int i = 0; i < n; ++i) {
            id.mat[i][i] = 1;
        }
        return id;
    }
};

Matrix matrixExp(Matrix base, long long exp) {
    Matrix result = Matrix::identity(base.size);
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = result * base;
        }
        base = base * base;
        exp /= 2;
    }
    return result;
}

int32_t main() {
    int T, N;
    long long D;
    cin >> T >> N >> D;

    vector<Matrix> maps(T, Matrix(N));
    for (int i = 0; i < T; ++i) {
        int M;
        cin >> M;
        for (int j = 0; j < M; ++j) {
            int a, b, c;
            cin >> a >> b >> c;
            maps[i].mat[a-1][b-1] += c;
            maps[i].mat[a-1][b-1] %= MOD;
        }
    }

    Matrix cycle = Matrix::identity(N);
    for (int i = 0; i < T; ++i) {
        cycle = cycle * maps[i];
    }

    Matrix result = matrixExp(cycle, D / T);

    Matrix partial = Matrix::identity(N);
    for (int i = 0; i < D % T; ++i) {
        partial = partial * maps[i];
    }

    result = result * partial;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << result.mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}