#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	string s1;
	string s2;
	
	cin>>s1;
	cin>>s2;
	
	int cnt=0;
	
	for(int i=0; i<n; i++){
		if(s1[i]!=s2[i]){
			cnt++;
		}
	}
	cout<<cnt;
}