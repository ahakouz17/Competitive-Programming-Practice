// https://codeforces.com/contest/330/problem/A
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string row;
    int r, c, n = 0, nr = 0;
    int *col;
    cin >> r >> c;
    col = new int[c];
    for (int i = 0; i < c; i++)
        col[i] = 0;
    for (int i = 0; i < r; i++)
    {
        n = 0;
        cin >> row;
        for (int j = 0; j < c; j++)
        {
            if (row[j] == 'S')
            {
                col[j]++;
                n++;
            }
        }
        if (n == 0)
            nr++;
    }
    int nc = 0;
    for (int i = 0; i < c; i++)
    {
        if (col[i] == 0)
            nc++;
    }
    int ncp;
    ncp = nr * c + nc * (r - nr);
    cout << ncp << endl;
    return 0;
}