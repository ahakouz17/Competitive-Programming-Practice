// solved: 2014-01-05 17:14:37
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, f, t;
    cin >> n >> k;
    int maxi;
    vector<pair<int, int>> rest(n);
    for (int i = 0; i < n; i++)
    {
        cin >> f >> t;
        rest[i] = make_pair(f, t);
    }
    sort(rest.begin(), rest.end());
    for (int i = n - 1; i >= 0; i--)
    {
        f = rest[i].first;
        t = rest[i].second;
        if (i == n - 1)
        {
            if (t <= k)
            {
                maxi = f;
                break;
            }
            else
                maxi = f - (t - k);
        }
        if (t <= k)
        {
            maxi = max(maxi, f);
            break;
        }
        maxi = max(maxi, f - (t - k));
    }
    cout << maxi;
    return 0;
}