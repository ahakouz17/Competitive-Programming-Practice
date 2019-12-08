// https://codeforces.com/contest/158/problem/D
// solved: 2013-12-22 04:43:01
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, maxi = 0;
    cin >> n;
    vector<int> ice(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ice[i];
        maxi += ice[i];
    }
    int st = 2, sum = 0, temp;
    for (st; st < n; st++)
    {
        if (n % st == 0 && n / st >= 3)
        {
            for (int i = 0; i < st; i++)
            {
                for (int j = i; j < n; j += st)
                    sum += ice[j];
                maxi = max(maxi, sum);
                sum = 0;
            }
        }
    }
    cout << maxi;
    return 0;
}