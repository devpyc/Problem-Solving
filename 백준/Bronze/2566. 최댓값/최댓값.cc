#include <iostream>

using namespace std;

int main()
{
	int a[9][9];
	int max=0;
	int cnt1=0,cnt2=0;
	
	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
			cin>>a[i][j];
			if(a[i][j]>max)
			{
				max=a[i][j];
				cnt1=i;
				cnt2=j;
			}
		}
	}
	cout<<max<<endl;
	cout<<cnt1+1<<" "<<cnt2+1;
}