// solved: 2013-11-29 22:08:39
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
    int b, g, mb, nb;
    char f, s;
    cin>>b>>g;
    if(b>g){ mb=b; nb=g; f='B'; s='G'; }
    else   { mb=g; nb=b; f='G'; s='B'; }
    while(mb >0 || nb>0)
    {
        if(mb>0) {cout<<f; mb--;}
        if(nb>0) {cout<<s; nb--;}
    }
    return 0;
}