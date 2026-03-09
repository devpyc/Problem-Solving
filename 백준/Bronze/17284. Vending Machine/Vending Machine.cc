#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
    string input;
    getline(cin, input);
    stringstream ss(input);

    vector<int> button_presses;
    int button;

    while (ss >> button) {
        button_presses.push_back(button);
    }

    int total_money = 5000;
    int total_cost = 0;

    for (int b : button_presses) {
        switch (b) {
            case 1:
                total_cost += 500;
                break;
            case 2:
                total_cost += 800;
                break;
            case 3:
                total_cost += 1000;
                break;
            default:
                return 1;
        }
    }

    int change = total_money - total_cost;
    cout << change << endl;

    return 0;
}