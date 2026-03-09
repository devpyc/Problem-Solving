#include <iostream>
#define endl "\n"
using namespace std;

int main() {
    int j, i;
    cin >> j >> i;

    char result;
    
    char junseong, ikjun;

    if (j == 0) junseong = 'R';
    else if (j == 2) junseong = 'S';
    else if (j == 5) junseong = 'P';
    else junseong = 'I';

    if (i == 0) ikjun = 'R';
    else if (i == 2) ikjun = 'S';
    else if (i == 5) ikjun = 'P';
    else ikjun = 'I';
    
    if (junseong == ikjun) {
        result = '=';
    } else if (junseong == 'I') {
        result = '<';
    } else if (ikjun == 'I') {
        result = '>';
    } else if ((junseong == 'R' && ikjun == 'S') ||
               (junseong == 'S' && ikjun == 'P') ||
               (junseong == 'P' && ikjun == 'R')) {
        result = '>';
    } else {
        result = '<';
    }

    cout << result << endl;

    return 0;
}