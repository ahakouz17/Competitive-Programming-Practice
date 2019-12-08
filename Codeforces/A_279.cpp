// solved: 2013-12-15 01:16:23
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
    int x, y, quad;
    cin>>x>>y;
    if((x==1 && y==0)|| (x==0 && y==0)) {cout<<0; return 0;}
    if(x>=0 && y>=0) quad=1;
    if(x< 0 && y>=0) quad=2;
    if(x< 0 && y< 0) quad=3;
    if(x>=0 && y< 0) quad=4;
    int maxi;
    if(quad==4 && abs(abs(x)-abs(y))==1) maxi=min(abs(y), abs(x));
    else maxi=max(abs(x), abs(y));

    if((abs(x)!= abs(y) && quad<4))
    {
        if((quad==1 && y>x)||(quad==2 && abs(x)>y)||(quad==3 && abs(y)>abs(x) ) ||(quad==4 && x>abs(y)) ) quad++;}

    if(maxi>1)cout<<4*(maxi-1)+quad;
    else cout<<quad;
    return 0;
}