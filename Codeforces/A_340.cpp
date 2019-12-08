// https://codeforces.com/contest/340/problem/A
// solved: 2013-11-29 22:43:13
#include <iostream>
#include <cmath>
using namespace std;
int  lcm (int , int );
int main()
{
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    int LCM=lcm(x,y);
    int initial=ceilf(a/float(LCM))*LCM;
    if(b<initial) {cout<<0<<endl; return 0;}
    cout<< (b-initial)/LCM+1;
    return 0;
}

int lcm(int a, int b){
    int t;
    int g=max(a, b);
    int s=a+b-g;
    if(g%s==0) return g;
    int m = g%s;
    while(m>0){
        t=g%s;
        g=s;
        s=t;
      m=g%s;
        if(m==0) return a*b/s;
    }}