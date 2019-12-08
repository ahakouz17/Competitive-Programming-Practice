//https://codeforces.com/contest/263/problem/B
// solved 2013-08-29
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (k > n)
    {
        cout << -1;
        return 0;
    }
    sort(a.begin(), a.end());
    long long int x, y = 0;
    x = a[n - k];
    cout << x << "\t" << y << endl;

    return 0;
}