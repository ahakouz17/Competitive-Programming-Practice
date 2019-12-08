// solved: 2014-02-06 17:35:46
// https://codeforces.com/contest/389/problem/B
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, h = 0;
    cin >> n;
    vector<vector<char>> c;
    vector<char> p(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> p[j];
            if (p[j] == '#')
                h++;
        }
        c.push_back(p);
    }
    if (c[0][0] == '#' || c[n - 1][n - 1] == '#' || c[n - 1][0] == '#' || c[0][n - 1] == '#' || h % 5 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (c[i][j] == '#' && c[i + 1][j] == '#' && c[i + 2][j] == '#' && c[i + 1][j - 1] == '#' && c[i + 1][j + 1] == '#')
            {
                c[i][j] = '.';
                c[i + 1][j] = '.';
                c[i + 2][j] = '.';
                c[i + 1][j - 1] = '.';
                c[i + 1][j + 1] = '.';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (c[i][j] == '#')
            {
                cout << "NO";
                return 0;
            }
    }
    cout << "YES";
    return 0;
}