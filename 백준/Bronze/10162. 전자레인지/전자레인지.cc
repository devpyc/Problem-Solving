#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    int A = 300;
    int B = 60;
    int C = 10;

    int a = 0;
    int b = 0;
    int c = 0;

    if(T % 10 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        a = T / A;
        T = T % A;

        b = T / B;
        T = T % B;

        c = T / C;
        T = T % C;

        cout << a << " " << b << " " << c << endl;
    }
}