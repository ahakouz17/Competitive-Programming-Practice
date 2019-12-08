// solved: 2013-12-07 03:29:22
#include <iostream>
using namespace std;
int main()
{
    int n, m, ac, bc, a, b;
    cin >> n >> m;
    if (n == m && n == 1)
    {
        cout << 2 << endl;
        return 0;
    }
    for (int a = 0; a * a <= n; a++)
        for (int b = 0; b * b <= m; b++)
        {
            if (a * a + b == n && a + b * b == m)
            {
                cout << 1 << endl;
                return 0;
            }
        }
    cout << 0 << endl;
    return 0;
}