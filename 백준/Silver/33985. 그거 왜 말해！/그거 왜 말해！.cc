#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin>>n>>s;

    (s.front()=='A'&&s.back()=='B')?cout<<"Yes":cout<<"No";
}