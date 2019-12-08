// solved: 2013-12-17 02:36:39
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, temp;
    vector<int> h;
    cin>>n;
    if(n==1) {cout<<1; return 0;}
    for(int i=0; i<n; i++) {cin>>temp; h.push_back(temp);}
    bool inc=false, dec=false;
    int c=1, maxi=0, last_in=0;
    for(int i=1; i<n; i++){
        if(dec && !inc){
            if(h[i]<h[i-1]) {c++; last_in=i; if(c>maxi) maxi=c;}
            else if(h[i]>h[i-1]) {if(c>maxi) maxi=c; c=i-last_in+1; dec=false; inc=true; last_in=i; }
            else if(h[i]==h[i-1]) c++;
        }
        else if(!dec && inc){
            if(h[i]>h[i-1]) {c++; last_in=i; if(c>maxi) maxi=c;}
            else if(h[i]<h[i-1]) {c++; if(c>maxi) maxi=c; dec=true; inc=false; last_in=i;}
            else if(h[i]==h[i-1]) c++;
        }
        else if(!inc && !dec) {
            if(h[i]>h[i-1]) {inc=true; c++; last_in=i;}
            else if(h[i]<h[i-1]) {dec=true; c++; last_in=i;}
            else {c++;}
        }
        if(c>maxi) maxi=c;
    }
    cout<<maxi;
    return 0;
}