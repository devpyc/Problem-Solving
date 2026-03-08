#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n;
	cin >> n;;

	for (int i = 1; i < n; i++) {
		int x = i, sum = i;
		while (x != 0) {
			sum += x % 10;
			x /= 10;
		}
		if (sum == n) {
			cout << i << "\n";
			return 0;
		}
	}
	cout << 0 << "\n";
}