// solved: 2013-12-17 15:07:02
#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    const int n = N;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    int p = 0, super_center = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (x[j] > x[i] && y[j] == y[i])
            {
                p++;
                break;
            }
        for (int j = 0; j < n; j++)
            if (x[j] < x[i] && y[j] == y[i])
            {
                p++;
                break;
            }
        for (int j = 0; j < n; j++)
            if (x[j] == x[i] && y[j] > y[i])
            {
                p++;
                break;
            }
        for (int j = 0; j < n; j++)
            if (x[j] == x[i] && y[j] < y[i])
            {
                p++;
                break;
            }
        if (p == 4)
            super_center++;
        p = 0;
    }
    cout << super_center;
    return 0;
}