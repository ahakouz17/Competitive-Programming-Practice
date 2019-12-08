// solved: 2014-01-17 01:31:58
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, a, b = 1;
    cin >> n;
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        p[i] = make_pair(a, b);
        b++;
    }
    sort(p.begin(), p.end());
    cout << p[n - 1].second << " " << p[n - 2].first << endl;
    return 0;
}