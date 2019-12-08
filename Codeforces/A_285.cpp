// solved: 2013-11-29 00:37:45
#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    if (k == 0)
    {
        for (int i = 0; i < n; i++)
            cout << i + 1 << " ";
        return 0;
    }
    if (k == n - 1)
    {
        for (int i = n; i > 0; i--)
            cout << i << " ";
        return 0;
    }

    for (int i = 1; i <= (n - k - 1); i++)
    {
        cout << i << " ";
    }
    for (int i = n; i > (n - k - 1); i--)
    {
        cout << i << " ";
    }
    return 0;
}