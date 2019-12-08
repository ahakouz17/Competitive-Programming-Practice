// https://codeforces.com/contest/148/problem/A
// solved: Aug/22/2013
#include <iostream>
using namespace std;

int main()
{
    int k, l, m, n;
    long long int d;
    int *arr;
    cin >> k >> l >> m >> n >> d;
    if (k == 1 || m == 1 || n == 1 || l == 1)
    {
        cout << d;
        return 0;
    }
    arr = new int[d + 1];
    for (int i = 0; i <= d + 1; i++)
        arr[i] = {1};

    for (int j = k; j <= d + 1; j += k)
    {
        arr[j] = {0};
    }
    for (int b = m; b <= d + 1; b += m)
    {
        arr[b] = {0};
    }
    for (int c = l; c <= d + 1; c += l)
    {
        arr[c] = {0};
    }
    for (int a = n; a <= d + 1; a += n)
    {
        arr[a] = {0};
    }
    int nd = 0;
    for (int e = 1; e < d + 1; e++)
        if (!arr[e])
            nd++;
    cout << nd;
    return 0;
}