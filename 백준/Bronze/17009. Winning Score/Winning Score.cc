#include <iostream>
int main() {
    int a,b,c,d,e,f;
    std::cin>>a>>b>>c>>d>>e>>f;
    int A=a*3+b*2+c,B=d*3+e*2+f;
    std::cout<<(A>B?'A':(A==B?'T':'B'));
}