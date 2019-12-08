// solved: 2013-12-14 16:43:15
#include <iostream>
using namespace std;
int main()
{
    int r, g, b;
    cin >> r >> g >> b;
    int sum = 0;
    sum += r / 3 + g / 3 + b / 3;
    if ((r == 0 || b == 0 || g == 0))
    {
        cout << sum << endl;
        return 0;
    }

    r = r % 3;
    g = g % 3;
    b = b % 3;
    if ((r == 0 && g == 2 && b == 2) || (r == 2 && g == 0 && b == 2) || (r == 2 && g == 2 && b == 0))
        sum++;
    else
    {
        if (r > 0 && b > 0 && g > 0)
        {
            if (r == 1 || b == 1 || g == 1)
                sum++;
            else
                sum += 2;
        }
    }
    cout << sum << endl;
    return 0;
}