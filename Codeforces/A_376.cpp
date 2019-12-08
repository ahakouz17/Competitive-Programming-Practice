// solved: 2013-12-24 18:33:42
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string l;
    cin >> l;
    long long int right = 0, left = 0;
    int n = l.length(), piv;
    vector<int> lev(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (l[i] == '^')
        {
            piv = i;
        }
        if (l[i] != '=')
        {
            lev[i] = int(l[i] - 48);
        }
    }
    int rc = piv + 1, lc = piv - 1;
    while (lc >= 0 || rc <= n - 1)
    {
        if (lc >= 0)
            left += lev[lc] * (piv - lc);
        if (rc <= n - 1)
            right += lev[rc] * (rc - piv);
        lc--;
        rc++;
    }
    if (right > left)
        cout << "right";
    else if (left > right)
        cout << "left";
    else
        cout << "balance";
    return 0;
}