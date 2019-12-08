// solved: 2014-01-05 10:21:46
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, mini = 10000;
    cin >> m >> n;
    vector<int> jig(n);
    for (int i = 0; i < n; i++)
        cin >> jig[i];
    sort(jig.begin(), jig.end());
    for (int i = 0; i + m - 1 < n; i++)
    {
        mini = min(jig[i + m - 1] - jig[i], mini);
    }
    cout << mini;
    return 0;
}