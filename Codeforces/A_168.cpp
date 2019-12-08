// solved:  2013-11-28 08:44:46
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    double  n, m, p;
    cin>>n>>m>>p;
    int pup=ceil(n*p/100)-m;
    if(pup>=0)
    cout<<pup<<endl;
    else cout<<0<<endl;
    return 0;
}