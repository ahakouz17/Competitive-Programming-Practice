// solved: 2014-01-08 15:46:11
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, y, x1, y2, v, sx, sy;
    cin >> x >> y;
    v = abs(x) + abs(y);
    sx = x / abs(x);
    sy = y / abs(y);
    if (sx * v > 0)
        cout << "0 " << sy * v << " " << sx * v << " 0";
    else
        cout << sx * v << " 0 "
             << "0 " << sy * v;
    return 0;
}