// solved: 2014-02-03 20:55:43
//https://codeforces.com/contest/389/problem/C
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> m(n);
    for (int i = 0; i < n; i++)
        cin >> m[i];
    sort(m.begin(), m.end());
    vector<vector<int>> a;
    vector<int> p;
    int in = 1, ro = 0;
    p.push_back(m[0]);
    a.push_back(p);
    p.clear();
    bool f = false;
    while (in < n)
    {
        ro = 0;
        while (ro < a.size())
        {
            const int R = ro;
            if (a[R].size() <= m[in])
            {
                a[R].push_back(m[in]);
                f = true;
                break;
            }
            ro++;
        }
        if (f == false)
        {
            p.push_back(m[in]);
            a.push_back(p);
        }
        f = false;
        p.clear();
        in++;
    }
    cout << a.size();
    return 0;
}