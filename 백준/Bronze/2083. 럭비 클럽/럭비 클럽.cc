#include <bits/stdc++.h>

using namespace std;

int main() {
    string name;
    int age, weight;
    while (true) {
        cin >> name >> age >> weight;
        if (age == 0 && weight == 0) {
            break;
        }
        if (age > 17 || weight >= 80) {
            cout << name << " Senior" << endl;
        } else {
            cout << name << " Junior" << endl;
        }
    }
}