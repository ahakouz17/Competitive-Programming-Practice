// https://codeforces.com/contest/285/problem/C
// solved: 2013-12-06 23:37:12
#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    long long n, temp, sum=0; cin>>n;
    vector<long long> num(n+1, 0), o;
    for(int i=0; i<n; i++ ){
        cin>>temp;
        if(temp<1) {sum+=1-temp; temp=1; o.push_back(temp);}
        else if(temp>n) {sum+=temp-n; temp=n; o.push_back(temp);}
        else if(num[temp]==1) o.push_back(temp);
        else num[temp]++;
    }
    sort(o.begin(), o.end());
    long long int o_in=o.size()-1;
    for(int i=num.size()-1; i>0; i--)
    {
        if(num[i]==0)
        {
            sum+=abs(o[o_in]-i);
            o.pop_back();
            o_in--;
        }
    }
    printf("%I64d",sum);
    return 0;
}