#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string,string>arr={{"Algorithm","204"},{"DataAnalysis","207"},{"ArtificialIntelligence","302"},{"CyberSecurity","B101"},{"Network","303"},{"Startup","501"},{"TestStrategy","105"}};
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        string s;
        cin>>s;
        cout<<arr[s]<<"\n";
    }
}