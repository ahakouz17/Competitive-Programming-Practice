// https://codeforces.com/contest/114/problem/A
// solved: 2013-11-06 02:05:19

#include <iostream>
using namespace std;
int main()
{
    int n, k, sq;
    cin >> n >> k;
    sq = k;
    int i;
    if (k % n != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    if (k < n * n && k != n)
    {
        cout << "NO" << endl;
        return 0;
    }
    for (i = 0; sq > 1; i++)
    {
        if (sq % n == 0)
            sq /= n;
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl
         << i - 1 << endl;
    return 0;
}