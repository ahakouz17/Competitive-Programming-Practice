// solved: 2013-12-15 02:46:17
#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    float n, R, r, pi = 3.14159265358;
    cin >> n >> R >> r;
    if ((n == 1 && R == r) || ((R - r) < r && n == 1 && r < R))
    {
        cout << "YES";
    }
    else if ((n * (2 * r) >= 2 * pi * (R - r) && n > 1) || (R < r) || ((R - r) < r))
    {
        cout << "NO";
    }
    else if (2.0 * (asin(r / (R - r)) * 180.0 / pi) * n <= 360.0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}