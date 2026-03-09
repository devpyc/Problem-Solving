#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N,M;
int map[101][101];
bool check = true;

// 상하,좌우 반전 함수( kind 상하,좌우 구분)
void flip(int kind){

    // 가로와 세로의 현재 상태를 체크해서 갱신해줌 ----
    int real_N = N;
    int real_M = M;
    if(!check){
        real_M = N;
        real_N = M;
    }

    // 상하반전
    if(kind == 1){
        // 가로가 아닌 세로로 탐색
        for(int i = 0; i < real_M; i++){
            // 줄에서의 반복은 딱 절반만 하면 됨
            for(int j = 0; j < real_N/2; j++){

                // 두 자리의 값을 바꿈 
                int tmp = map[j][i];
                // 행 탐색(세로로 탐색)
                map[j][i] = map[real_N-j-1][i];
                map[real_N-j-1][i] = tmp;
            }
        }
    }
        // 좌우반전
    else{
        // 가로로 탐색
        for(int i = 0; i < real_N; i++){
            for(int j = 0; j < real_M/2; j++){
                int tmp = map[i][j];
                // 가로로 탐색
                map[i][j] = map[i][real_M-j-1];
                map[i][real_M-j-1] = tmp;
            }
        }
    }
}


void rotate(int kind){

    int temp[101][101] = {0,}; // 90도 돌린 새로운 배열
    fill(&temp[0][0],&temp[101-1][101],0); // temp 초기화

    // 배열 현재 상태 체크
    if(check){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                // 시계 방향
                if(kind == 3) temp[j][N-1-i] = map[i][j];
                    // 반시계 방향
                else temp[M-1-j][i] = map[i][j];
            }
        }
        check = false; // 돌렸으니 상태도 변경
    }
    else{
        for(int i = 0; i < M; i++){
            for(int j = 0; j < N; j++){
                // 시계 방향
                if(kind == 3) temp[j][M-1-i] = map[i][j];
                    // 반시계 방향
                else temp[N-1-j][i] = map[i][j];
            }
        }
        check = true; // 돌렸으니 상태도 변경
    }
    fill(&map[0][0],&map[101-1][101],0); // map 값 다 0으로 만듬

    // 새롭게 만들어진 temp를 map에 넣음으로써 map 갱신
    for(int i = 0; i < 101; i++)
        for(int j = 0; j < 101; j++) map[i][j] = temp[i][j];
}
void divided(int kind){

    // 가로와 세로의 현재 상태를 체크해서 갱신해줌 ----
    int real_N = N;
    int real_M = M;
    if(!check){
        real_M = N;
        real_N = M;
    }

    int width = real_M/2; // 자르는 가로 기준(절반)
    int height = real_N/2;// 자르는 세로 기준(절반)

    vector<vector<int>> v[2][2]; // 각각 4분할로 담을 배열 벡터
    //4분할
    for(int i = 0; i < real_N; i++){
        vector<int> tmp;
        // 열의 절반까지만 한 배열
        for(int j = 0; j < real_M/2; j++){
            tmp.push_back(map[i][j]);
        }
        v[i/height][0].push_back(tmp);
        tmp.clear();

        // 남은 열의 절반 배열 다른 배열에 담음
        for(int j = real_M/2; j < real_M; j++){
            tmp.push_back(map[i][j]);
        }
        v[i/height][1].push_back(tmp);
    }

    vector<vector<int>> tmp = v[0][0];
    // 시계 방향으로 돌림
    if(kind == 5){
        v[0][0] = v[1][0];
        v[1][0] = v[1][1];
        v[1][1] = v[0][1];
        v[0][1] = tmp;
    }

        // 반시계 방향으로 돌림
    else{
        vector<vector<int>> tmp = v[0][0];
        v[0][0] = v[0][1];
        v[0][1] = v[1][1];
        v[1][1] = v[1][0];
        v[1][0] = tmp;
    }

    for(int i = 0; i < real_N; i++){
        for(int j = 0; j < real_M; j++){
            //(i/height)*height : 배열 인덱스를 구하기 위한 오프셋
            map[i][j] = v[i/height][j/width][i-(i/height)*height][j-(j/width)*width];
        }
    }
}
int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int R;
    cin >> N >> M >> R;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) cin >> map[i][j];

    while (R--) {
        int num;
        cin >> num;
        switch (num) {
            case 1:
            case 2:
                flip(num);
                break;

            case 3:
            case 4:
                rotate(num);
                break;

            case 5:
            case 6:
                divided(num);
                break;
        }
    }
    int size = max(N, M);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (map[i][j] == 0) continue;
            cout << map[i][j] << " ";
        }
        cout << "\n";
    }
}