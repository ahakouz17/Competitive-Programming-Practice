// solved: 2013-12-29 20:48:57
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, f = 0, s = 0, t = 0;
    cin >> a >> b;
    for (int i = 1; i <= 6; i++)
    {
        if (abs(a - i) == abs(b - i))
            t++;
        if (abs(a - i) > abs(b - i))
            s++;
        if (abs(a - i) < abs(b - i))
            f++;
    }
    cout << f << " " << t << " " << s;
    return 0;
}