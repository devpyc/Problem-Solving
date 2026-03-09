#include <iostream>
using namespace std;

int main() {
    int Q, problems = 0;
    cin >> Q;
    
    for (int i = 0; i < Q; ++i) {
        int type, num;
        cin >> type >> num;
        
        if (type == 1) {
            problems += num;
        } else if (type == 2) {
            if (problems < num) {
                cout << "Adios" << endl;
                return 0;
            } else {
                problems -= num;
            }
        }
    }
    
    cout << "See you next month" << endl;
    return 0;
}