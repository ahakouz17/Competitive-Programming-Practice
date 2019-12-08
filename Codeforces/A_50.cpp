// https://codeforces.com/contest/50/problem/A
// solved: Aug/17/2013
#include <iostream>
using namespace std;
int main()
{
    int m, n, num = 0;
    cin >> m;
    cin >> n;
    if (m % 2 != 0 && n % 2 != 0)
        num = ((m - 1) / 2) * n + n / 2;
    else if (m % 2 == 0 && n % 2 == 0)
        num = m * n / 2;
    else if (m % 2 == 0 && n % 2 != 0)
    {
        if (n == 1)
            num = m / 2;
        else
            num = (m / 2) * n;
    }
    if (m % 2 != 0 && n % 2 == 0)
    {
        if (m == 1)
            num = n / 2;
        else
            num = (n / 2) * m;
    }
    cout << num << endl;
    return 0;
}