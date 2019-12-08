// solved: 2013-12-16 16:19:18
#include <iostream>
using namespace std;
int main()
{
    int n, xa = 0, ya = 0, xb = 0, yb = 0, temp, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 1)
        {
            cin >> a >> b;
            xa += a;
            ya += b;
        }
        else
        {
            cin >> a >> b;
            xb += a;
            yb += b;
        }
    }
    (xa >= ya) ? cout << "LIVE" << endl : cout << "DEAD" << endl;
    (xb >= yb) ? cout << "LIVE" : cout << "DEAD";

    return 0;
}