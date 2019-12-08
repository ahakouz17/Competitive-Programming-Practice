#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <float.h>
using namespace std;
int main()
{
    int n, k, b;
    long double x1, x2;
    cin >> n >> x1 >> x2;
    x1 += LDBL_EPSILON;
    x2 -= LDBL_EPSILON;
    vector<pair<long double, int>> y1(n);
    vector<pair<long double, int>> y2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> k >> b;
        y1[i].first = k * x1 + b;
        y2[i].first = k * x2 + b;
        y1[i].second = i;
        y2[i].second = i;
    }
    sort(y1.begin(), y1.end());
    sort(y2.begin(), y2.end());
    //    for(int i = 0; i < n; i++)
    //    {
    //        cout<<y1[i].second<<" , " << y1[i].first<<"    /  "<<y2[i].second<<" , "<< y2[i].first<<endl;
    //    }
    int i = 0;
    while (i < n)
    {
        if (y1[i].second != y2[i].second)
        {
            cout << "YES" << endl;
            return 0;
        }
        i++;
    }
    cout << "NO" << endl;
    return 0;
}