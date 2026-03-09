#include <iostream>
using namespace std;
int main(void)
{
	int arr[1000] = { 0, }, k = 1, a, b, sum = 0;
	cin >> a >> b;
	for (int i = 1; i <= 1000;)
	{
		for (int j = 1; j <= k && i <= 1000; j++)
			arr[i++] = k;
		k++;
	}
	for (int i = a; i <= b; i++)
		sum += arr[i];
	cout << sum;
}