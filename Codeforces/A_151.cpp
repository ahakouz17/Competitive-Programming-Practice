// https://codeforces.com/contest/151/problem/A
// solved: Aug/22/2013
#include <iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int mm, ns, ng, nt = 0;

    mm = k * l;
    ns = c * d;
    ng = p;

    while (mm >= (nl * n) && ns >= (n) && ng >= (np * n))
    {
        nt++;
        mm -= nl * n;
        ns -= n;
        ng -= np * n;
    }

    cout << nt << endl;
    return 0;
}