#include <iostream>
#define ll long long
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll T, N, K;
    cin >> T;
    while (T--)
    {
        cin >> N >> K;
        while (N && K)
        {
            N /= 2;
            K--;
        }
        cout << (N + 1) / 2 << "\n";
    }
}