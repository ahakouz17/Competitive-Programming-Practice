//https://codeforces.com/contest/237/problem/A
// solved: 2013-08-26
#include <iostream>
using namespace std;
int main()
{
    int maxi = 1;
    int n, ho, mo, hi, mi, Fcash = 1;
    cin >> n >> ho >> mo;

    for (int i = 1; i <= n - 1; i++)
    {
        cin >> hi >> mi;
        if (hi == ho && mi == mo)
        {
            Fcash++;
            if (Fcash > maxi)
                maxi = Fcash;
        }
        else
        {
            Fcash = 1;
        }
        ho = hi;
        mo = mi;
    }
    cout << maxi << endl;

    return 0;
}