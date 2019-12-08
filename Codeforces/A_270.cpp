// solved: 2013-12-01 02:08:00
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        int ang;
        cin >> ang;
        if (ang == 90 || ang == 60)
        {
            cout << "YES" << endl;
        }
        else if (ang < 90)
        {
            cout << "NO" << endl;
        }
        else if (360 % (180 - ang) == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}