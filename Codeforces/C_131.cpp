// https://codeforces.com/contest/131/problem/C
// solved: 2013-12-14 13:57:38
#include <iostream>
#include <stdio.h>
using namespace std;
long long p_n_r(int, int);
int main()
{
    int n, m, t;
    cin >> n >> m >> t;
    //we calculate the total # of permtations then we exclude cases
    //that do not satisfy the conditions(4boys &1girl at least)
    long long total, exceptions;
    total = p_n_r(n + m, t);
    exceptions = p_n_r(n, t) + p_n_r(m, t) + p_n_r(n, 3) * p_n_r(m, t - 3) + p_n_r(n, 2) * p_n_r(m, t - 2) + p_n_r(n, 1) * p_n_r(m, t - 1);
    printf("%I64d", total - exceptions);
    return 0;
}

long long p_n_r(int n, int r)
{
    long long per = 1;
    for (int i = 1; i <= r; i++)
        per = per * (n - i + 1) / i;
    return per;
}