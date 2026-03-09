#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(N);
    for(auto &x: A) cin >> x;

    int B = sqrt(N) + 1;
    int num_blocks = (N + B - 1) / B;
    vector< vector<int> > blocks(num_blocks);


    for(int i=0;i<N;i++){
        blocks[i / B].push_back(A[i]);
    }

    for(int b=0;b<num_blocks;b++) {
        sort(blocks[b].begin(), blocks[b].end());
    }

    int M;
    cin >> M;

    while(M--){
        int type;
        cin >> type;

        if(type == 1){
            int i, v;
            cin >> i >> v;

            i--;
            int b = i / B;

            auto it = lower_bound(blocks[b].begin(), blocks[b].end(), A[i]);

            if(it != blocks[b].end()){
                blocks[b].erase(it);
            }
            blocks[b].insert(upper_bound(blocks[b].begin(), blocks[b].end(), v), v);

            A[i] = v;
        }
        else if(type == 2){
            int i, j, k;
            cin >> i >> j >> k;

            i--;
            j--;

            int b_start = i / B;
            int b_end = j / B;
            int cnt = 0;

            if(b_start == b_end){
                for(int idx = i; idx <= j; idx++) {
                    if(A[idx] > k) cnt++;
                }
            }
            else{
                int end_first = (b_start + 1) * B - 1;
                for(int idx = i; idx <= end_first; idx++) {
                    if(A[idx] > k) cnt++;
                }

                for(int b = b_start + 1; b < b_end; b++) {
                    int num = blocks[b].end() - upper_bound(blocks[b].begin(), blocks[b].end(), k);
                    cnt += num;
                }
                int start_last = b_end * B;
                for(int idx = start_last; idx <= j; idx++) {
                    if(A[idx] > k) cnt++;
                }
            }
            cout << cnt << "\n";
        }
    }
}