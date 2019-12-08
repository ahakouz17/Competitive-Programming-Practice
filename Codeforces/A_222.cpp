// solved: 2013-12-08 01:28:20
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k, l_in = 0, temp, old, k_val;
    cin >> n >> k;
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    cin >> temp;
    l_in = 1;
    old = temp;
    if (k == 1)
        k_val = temp;
    for (int i = 2; i <= n; i++)
    {
        cin >> temp;
        if (i <= k)
        {
            if (temp != old)
                l_in = i;
        }
        if (i == k)
            k_val = temp;
        else if (i > k)
            if (temp != k_val)
            {
                cout << -1 << endl;
                return 0;
            }
        old = temp;
    }
    cout << l_in - 1 << endl;

    return 0;
}