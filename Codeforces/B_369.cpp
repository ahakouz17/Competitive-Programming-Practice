// https://codeforces.com/contest/369/problem/B
// solved: 2013-11-29 23:57:56
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, k, l, r, sall, sk;
    cin >> n >> k >> l >> r >> sall >> sk;
    sall -= sk;
    for (int i = 0; i < k; i++)
    {
        cout << sk / (k - i) << " ";
        sk -= sk / (k - i);
    }
    int rest = n - k;
    for (int i = k; i < n; i++)
    {
        cout << (sall / rest) << " ";
        sall -= sall / rest;
        rest--;
    }
    return 0;
}