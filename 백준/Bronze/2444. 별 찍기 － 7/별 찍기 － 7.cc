#include <iostream>

using namespace std;

int main()
{
	int i,j;
	int n;
	cin>>n;
	for (i = 1; i <= n; ++i) {
		for (j = 1; j <= n - i; ++j)
		{
			cout<<" ";
		}
		for (j = 1; j < 2 * i; ++j)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for (i = n + 1; i < n * 2; ++i) {
		for (j = n; j < i; ++j)
		{
			cout<<" ";
		}
		for (j = 1; j < 2 * (2 * n - i); ++j)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}