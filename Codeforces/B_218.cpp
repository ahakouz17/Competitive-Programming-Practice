// solved: 2013-12-15 14:00:53
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int maxi = 0, temp, mini = 0;
    const int N = n;
    while (n > 0)
    {
        for (int i = 0; i < m; i++)
        {
            temp = a[i];
            while (temp > 0 && n > 0)
            {
                mini += temp;
                n--;
                temp--;
            }
        }
    }
    n = N;
    while (n > 0)
    {
        for (int i = m - 1; i >= 0; i--)
        {
            while ((m != 1 && n > 0 && a[i] > 0) || (m == 1 && n > 0) || n > 0)
            {
                if (a[i] < a[i - 1])
                    sort(a.begin(), a.end());
                maxi += a[i];
                n--;
                a[i]--;
            }
        }
    }
    cout << maxi << " " << mini;
    return 0;
}