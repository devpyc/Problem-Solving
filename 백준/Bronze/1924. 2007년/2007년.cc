#include <iostream>
#include <string>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string dayOfWeek[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    int totalDays = 0;
    for (int i = 1; i < x; ++i) {
        totalDays += daysInMonth[i];
    }
    totalDays += y;

    cout << dayOfWeek[totalDays % 7] << endl;

    return 0;
}