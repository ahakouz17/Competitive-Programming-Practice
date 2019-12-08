// solved: 2014-01-30 20:16:17
// https://codeforces.com/contest/387/problem/B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int ina = 0, inb = 0;
    while (ina < n && inb < m)
    {
        while (a[ina] > b[inb])
        {
            inb++;
            if (inb >= m)
            {
                if (ina > n)
                    ina--;
                cout << n - ina;
                return 0;
            }
        }
        if (b[inb] >= a[ina])
        {
            ina++;
            inb++;
        }
    }
    if (ina == n)
        cout << 0;
    else if (inb == m)
        cout << n - ina;
    return 0;
}