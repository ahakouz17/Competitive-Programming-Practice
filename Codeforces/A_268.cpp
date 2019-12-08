// https://codeforces.com/contest/268/problem/A
// solved: 2013-08-25
#include <iostream>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    int *H;
    int *G;
    H = new int[n];
    G = new int[n];

    for (int i = 0; i < n; i++)
        cin >> H[i] >> G[i];

    for (int h = 0; h < n; h++)
    {
        for (int g = 0; g < n; g++)
        {
            if (g != h)
            {
                if (H[h] == G[g])
                    c++;
            }
        }
    }
    cout << c << endl;
    return 0;
}