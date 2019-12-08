// solved: 2013-11-29 00:10:01
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> n;
    const int N = n;
    int pedal[N];
    for (int i = 0; i < n; i++)
        cin >> pedal[i];
    cin >> m;
    const int M = m;
    int rear[M];
    for (int i = 0; i < m; i++)
        cin >> rear[i];

    int cp = 0, cm, maxi = 0, cr = 0;
    for (cp = 0; cp < n; cp++)
    {
        for (cr = m - 1; cr >= 0; cr--)
        {
            if (pedal[cp] <= rear[cr] && rear[cr] % pedal[cp] == 0)
            {
                maxi = max(maxi, rear[cr] / pedal[cp]);
                break;
            }
        }
    }
    for (cp = 0; cp < n; cp++)
    {
        for (cr = m - 1; cr >= 0; cr--)
        {
            if (pedal[cp] <= rear[cr] && rear[cr] % pedal[cp] == 0 && maxi == rear[cr] / pedal[cp])
            {
                cm++;
                break;
            }
        }
    }
    cout << cm << endl;
    return 0;
}