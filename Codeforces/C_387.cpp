// solved: 2014-01-30 21:14:50
// https://codeforces.com/contest/387/problem/C
#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main()
{
    string s1, s2="";
    cin>>s1;
    int c=1, in=s1.length()-1;
    while(in>=0 ){
        while(s1[in]=='0') in--;
        s2=s1.substr(in, s1.length()-in);
        s1=s1.substr(0, in);
        if(s1.length()>s2.length() || (s1.length()==s2.length() && s1 >= s2)) {c++; in--;}
        else break;
    }

    cout<<c;
    return 0;
}