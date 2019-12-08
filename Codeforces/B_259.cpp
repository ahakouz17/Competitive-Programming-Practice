// https://codeforces.com/contest/259/problem/B
// Solved: Aug/23/2013
#include <iostream>
using namespace std;

int main()
{
    long int sq[3][3];
    long int d1, d2, d3;
    long int a, b, c, d, e, f;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
            cin >> sq[r][c];
    }
    a = sq[0][1];
    b = sq[0][2];
    c = sq[1][0];
    d = sq[1][2];
    e = sq[2][0];
    f = sq[2][1];

    d2 = (a + b - (c + d) + e + f) / 2;
    d1 = d2 - (a + b - (c + d));
    d3 = c + d - d1;

    sq[0][0] = d1;
    sq[1][1] = d2;
    sq[2][2] = d3;

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
            cout << sq[r][c] << "\t";
        cout << endl;
    }
}