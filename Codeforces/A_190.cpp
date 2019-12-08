// solved: 2013-12-24 16:29:55
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if (n == 0 && m != 0)
    {
        cout << "Impossible";
        return 0;
    }
    if (n > m)
        cout << n << " ";
    else
        cout << m << " ";
    if (m > 0)
        cout << n + (m - 1);
    else
        cout << n;
    return 0;
}