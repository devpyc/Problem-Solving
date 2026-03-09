#include <iostream>

using namespace std;

int main()
{
	int H,M;
	int a;
	
	cin>>H>>M;
	if(H==0)
	{
		H=24;
	}
	a=H*60+M-45;
	H=a/60;
	if(H==24)
	{
		H=0;
	}
	else if(H>24)
	{
		H=H-24;
	}
	M=a%60;
	if(M<0)
	{
		H--;
	}
	cout<<H<<" "<<M;
}