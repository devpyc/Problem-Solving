#include <iostream>
using namespace std;
int main() {
    string majorName; double avg = 0; float sumGrade = 0;
    double score[20]; float grade[20];
    string input;
    for (int i = 0; i < 20; ++i)
    {
        cin >> majorName >> grade[i] >> input;
        if (input == "A+") score[i] = 4.5;
        else if (input == "A0") score[i] = 4.0;
        else if (input == "B+") score[i] = 3.5;
        else if (input == "B0") score[i] = 3.0;
        else if (input == "C+") score[i] = 2.5;
        else if (input == "C0") score[i] = 2.0;
        else if (input == "D+") score[i] = 1.5;
        else if (input == "D0") score[i] = 1.0;
        else if (input == "F") score[i] = 0.0;
        else if (input == "P") { score[i] = 0.0; grade[i] = 0; }
        avg += (score[i] * grade[i]);
        sumGrade += grade[i];
    }
    avg = avg / sumGrade;
    cout << fixed;
    cout.precision(6);
    cout << avg;
}