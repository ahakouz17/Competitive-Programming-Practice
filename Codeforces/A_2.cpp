// solved: 2013-12-23 20:23:31
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n, sc;
    string name;
    cin>>n;
    vector <pair <int, string> > c(n);
    vector <pair <string, int> > a(n), b(n);
    for(int i=0; i<n; i++){
        cin>>name>>sc;
        a[i]=make_pair(name, sc);
        b[i]=make_pair(name, sc);
    }
    sort(a.begin(), a.end());
    int sum=a[0].second, in=0;
    string temp=a[0].first, f, s;
    for(int i=1; i<a.size(); i++){
            if(a[i].first==temp) sum+=a[i].second;
            else { c[in]=make_pair(sum, temp); in++; temp=a[i].first; sum=a[i].second;}
            }
            c[in]=make_pair(sum, temp);
        sort(c.begin(), c.end());
    vector<string> win; int maxi;
    if(c[n-1].first==c[n-2].first) {maxi=c[n-1].first; int i=n-1; while(c[i].first==maxi){win.push_back(c[i].second); i--;}}
    else {cout<<c[n-1].second; return 0;}
    int ind=win.size();
    vector<int>nw(ind, 0);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<ind; j++){
            if(b[i].first==win[j]){nw[j]+=b[i].second; if(nw[j]>=c[n-1].first) {cout<<win[j]; return 0;}}}
    }
    return 0;
}

 