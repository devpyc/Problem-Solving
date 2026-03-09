#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

struct Appointment {
    string name;
    int week;
    int day;
    int cost;
};

int main() {
    int N;
    cin >> N;

    vector<Appointment> appointments(N);
    unordered_map<string, int> moneyMap;
    
    for (int i = 0; i < N; ++i) {
        cin >> appointments[i].name >> appointments[i].week >> appointments[i].day >> appointments[i].cost;
    }
    
    for (int i = 0; i < N; ++i) {
        string name;
        int money;
        cin >> name >> money;
        moneyMap[name] = money;
    }

    set<int> validDays;
    
    for (const auto& appointment : appointments) {
        if (moneyMap[appointment.name] >= appointment.cost) {
            int absoluteDay = (appointment.week - 1) * 7 + appointment.day;
            validDays.insert(absoluteDay);
        }
    }
    
    int maxConsecutiveDays = 0;
    int currentStreak = 0;
    int lastDay = -2;

    for (int day : validDays) {
        if (day == lastDay + 1) {
            currentStreak++;
        } else {
            currentStreak = 1;
        }
        maxConsecutiveDays = max(maxConsecutiveDays, currentStreak);
        lastDay = day;
    }

    cout << maxConsecutiveDays << endl;

    return 0;
}