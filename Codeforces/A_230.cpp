// solved: 2013-12-28 14:24:28
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> m >> n;
    vector<pair<int, int>> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        d[i] = make_pair(a, b);
    }
    sort(d.begin(), d.end());
    int sum = m, i = 0;
    while (d[i].first < sum)
    {
        sum += d[i].second;
        i++;
        if (i == d.size())
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}