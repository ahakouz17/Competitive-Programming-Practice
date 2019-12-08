#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

long long pwr(int a, int b){
    long long p=a;
    for(int i=1; i<b; i++){
        p*=a;
        if(p>=1000000000) return -1;
    }
    return p;
}
int digSum(int x){
    int qu=10, sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}

int main()
{
    int a, b, c;
    long long p, x;
    scanf("%d%d%d", &a, &b, &c);
    vector<int> v;
    for(int i=0; i<=81; i++){
        p=pwr(i, a);
        if(p==-1) break;
        x=b*p+c;
        if(digSum(x)==i && x>0 && x<1000000000) v.push_back(x);
    }
    printf("%d\n", v.size());
    for(int i=0; i<v.size(); i++){
        printf("%d ", v[i]);
    }
    //printf("%d", v[v.size()-1]);
    return 0;
}