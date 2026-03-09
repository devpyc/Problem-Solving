#include <iostream>
#include <string>
using namespace std;

int main() {
    string address;
    while (true) {
        getline(cin, address);
        if (address == "0") break;

        int sum = 0;
        for (char c : address) {
            if (c == '1') sum += 2;
            else if (c == '0') sum += 4;
            else sum += 3;
        }
        sum += address.length() + 1;  // 공백 추가
        cout << sum << endl;
    }
    return 0;
}