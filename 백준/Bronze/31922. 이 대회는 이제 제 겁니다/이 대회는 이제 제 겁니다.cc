#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int A, P, C;
    cin >> A >> P >> C;

    int prize_div1 = A + C;
    int prize_div2 = P;

    int max_prize = max(prize_div1, prize_div2);

    cout << max_prize << endl;

    return 0;
}