// solved: 2013-11-30 15:14:49
#include <iostream>
using namespace std;
int main()
{
    int n, x, y, ox = 0, oy = 0, mo = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x % 2 != 0)
            ox++;
        if (x % 2 != y % 2)
            mo++;
        if (y % 2 != 0)
            oy++;
    }
    if (ox == 1 || oy == 1)
    {
        if (ox % 2 == 1 && oy % 2 == 1 && mo != 0)
            cout << 1;
        else
            cout << -1;
    }
    else if (ox % 2 == 0 && oy % 2 == 0)
        cout << 0;
    else if (mo != 0 && ox % 2 != 0 && oy % 2 != 0)
        cout << 1;
    else
        cout << -1;
    return 0;
}