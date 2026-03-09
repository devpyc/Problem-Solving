#include <iostream>
using namespace std;

string getDayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }

    int h = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;

    switch (h) {
        case 0:
            return "Monday";
        case 1:
            return "Tuesday";
        case 2:
            return "Wednesday";
        case 3:
            return "Thursday";
        case 4:
            return "Friday";
        case 5:
            return "Saturday";
        case 6:
            return "Sunday";
    }

    return 0;
}

int main() {
    int D, M;
    cin >> D >> M;

    int year = 2009;

    string dayOfWeek = getDayOfWeek(D, M, year);
    cout<<dayOfWeek;
}