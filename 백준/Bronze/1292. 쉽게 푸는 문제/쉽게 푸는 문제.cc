#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int count = 0, c = 0, ab[1000];
	for (int i = 1; i <= 1000; i++) {
		for (int j = 0; j < i && count < 1000; j++) {
			ab[count++] = i;
		}
	}
	for(int j=a-1; j<=b-1; j++)
	{
		c+=ab[j];
	}
	cout<<c;
}