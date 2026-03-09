#include<bits/stdc++.h>

using namespace std;

class Value{
public:
    int idx;
    int target;
    int cost;
};

int main(){
    int n;
    int k;

    int visited[2][500001];
    memset(visited, -1, sizeof(visited));

    cin >> n >> k;

    queue<Value> q;
    q.push({ n, k, 0 });

    while(!q.empty()){
        Value cur = q.front();
        q.pop();

        if(cur.target > 500000)
            continue;
        if(cur.idx < 0 || cur.idx > 500001)
            continue;
        if(visited[cur.cost % 2][cur.idx] != -1)
            continue;

        visited[cur.cost % 2][cur.idx] = cur.cost;

        if(visited[cur.cost % 2][cur.target] != -1){
            cout << cur.cost;
            return 0;
        }

        q.push({ cur.idx + 1, cur.target + cur.cost + 1, cur.cost + 1 });
        q.push({ cur.idx - 1, cur.target + cur.cost + 1, cur.cost + 1 });
        q.push({ cur.idx * 2, cur.target + cur.cost + 1, cur.cost + 1 });
    }

    cout << -1;
}