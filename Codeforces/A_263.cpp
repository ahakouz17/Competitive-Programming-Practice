// https://codeforces.com/contest/263/problem/A
// solved: 2013-08-25 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int mat[5][5];
    int rp, cp;

    for (int r = 0; r < 5; r++)
        for (int c = 0; c < 5; c++)
        {
            cin >> mat[r][c];
            if (mat[r][c] == 1)
            {
                rp = r + 1;
                cp = c + 1;
            }
        }
    int moves;
    moves = abs(rp - 3) + abs(cp - 3);
    cout << moves << endl;

    return 0;
}