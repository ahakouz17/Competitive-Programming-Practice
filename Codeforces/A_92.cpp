// solved: 2013-12-01 00:29:44
#include <iostream>
using namespace std;
int main()
{
    int n, nc;
    cin >> n >> nc;
    int u_bnd = n * (n + 1) / 2;
    if (nc > u_bnd)
        nc = nc % u_bnd;
    for (int i = 1; i <= n; i++)
    {
        int tri = i * (i + 1) / 2;
        if (tri == nc)
        {
            cout << 0 << endl;
            return 0;
        }
        if (tri > nc)
        {
            cout << nc - ((i - 1) * (i) / 2) << endl;
            return 0;
        }
    }

    return 0;
}