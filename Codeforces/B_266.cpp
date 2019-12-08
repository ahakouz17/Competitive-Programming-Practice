// https://codeforces.com/contest/266/problem/B
// solved 2013-08-25
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, t;
    string q;
    cin >> n >> t >> q;
    for (t; t != 0; t--)
    {
        for (int i = 0; i < n;)
        {
            if (q[i] == 'G')
                i++;
            else //B
            {
                if (q[i + 1] == 'G') //BG
                {
                    q[i + 1] = 'B';
                    q[i] = 'G';
                    i += 2;
                }
                else //BB
                    i++;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << q[i];

    return 0;
}