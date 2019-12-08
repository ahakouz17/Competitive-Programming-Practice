// solved: 2014-01-08 01:46:31
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m, x, y;
    cin >> n;
    vector<int> l(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> l[i];
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        if (x == 0)
            l[x + 1] += l[x] - y;
        else if (x == n)
            l[x - 1] += y - 1;
        else
        {
            l[x + 1] += l[x] - y;
            l[x - 1] += y - 1;
        }
        l[x] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << l[i] << endl;
    }

    return 0;
}