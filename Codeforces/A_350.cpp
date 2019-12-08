// https://codeforces.com/contest/350/problem/A
// solved: 2013-10-13
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int *t;
    int *f;
    t = new int[n];
    f = new int[m];
    int mini = 100, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        maxi = max(t[i], maxi);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> f[i];
        mini = min(f[i], mini);
    }

    int ub = mini, lb = maxi;
    for (int j = lb; j < ub; j++)
    {
        for (int k = 0; k < n; k++)
        {
            if (2 * t[k] <= j)
            {
                cout << j << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
