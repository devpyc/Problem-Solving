#include <iostream>
#include <string>

using namespace std;

bool has666(int n) { // 숫자에 666이 포함되어 있는지 확인하는 함수
    string numStr = to_string(n);
    return numStr.find("666") != string::npos;
}

int main() {
    int n;
    cin >> n;

    int count = 0;
    int num = 665; // 시작 숫자

    while (count < n) {
        num++;
        if (has666(num)) {
            count++;
        }
    }
    cout << num << endl;

    return 0;
}