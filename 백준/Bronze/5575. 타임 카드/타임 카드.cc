#include <bits/stdc++.h>
#define endl "\n"
#define io ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;

struct Time{
    int h,m,s;
};

Time time(Time start, Time end){
    Time ans;
    if(end.s<start.s){
        end.s+=60;
        end.m-=1;
    }
    ans.s=end.s-start.s;

    if(end.m<start.m){
        end.m+=60;
        end.h-=1;
    }
    ans.m=end.m-start.m;
    ans.h=end.h-start.h;

    return ans;
}

int main(){
    io;

    Time startA, endA, startB, endB, startC, endC;

    cin>>startA.h>>startA.m>>startA.s>>endA.h>>endA.m>>endA.s;
    cin>>startB.h>>startB.m>>startB.s>>endB.h>>endB.m>>endB.s;
    cin>>startC.h>>startC.m>>startC.s>>endC.h>>endC.m>>endC.s;

    Time workTimeA=time(startA,endA);
    Time workTimeB=time(startB,endB);
    Time workTimeC=time(startC,endC);

    cout<<workTimeA.h<<" "<<workTimeA.m<<" "<<workTimeA.s<<endl;
    cout<<workTimeB.h<<" "<<workTimeB.m<<" "<<workTimeB.s<<endl;
    cout<<workTimeC.h<<" "<<workTimeC.m<<" "<<workTimeC.s<<endl;
}