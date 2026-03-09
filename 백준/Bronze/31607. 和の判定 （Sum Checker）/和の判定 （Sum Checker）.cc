#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	
	cout<<(a+b==c || a+c==b || b+c==a);
	
	return 0;
}