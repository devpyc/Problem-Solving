#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define pi pair<int,int>
#define mi map<int,int>
#define qi queue<int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define tiii tuple<int,int,int>
#define endl "\n"
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

bool solve(int num, char L) {
    string str = to_string(num);
    return str.find(L) != string::npos;
}

int main() {
    int N;
    char L;
    cin >> N >> L;

    int count = 0;
    int current_number = 1;
    int max_number = 0;

    while (count < N) {
        if (!solve(current_number, L)) {
            max_number = current_number;
            count++;
        }
        current_number++;
    }

    cout << max_number << endl;
    return 0;
}