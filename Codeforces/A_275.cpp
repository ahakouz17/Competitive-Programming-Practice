// solved: 2013-11-28 
#include <iostream>
using namespace std;
int main()
{
    int a[3][3] = {0};
    int p[3][3];
    for (int r = 0; r < 3; r++)
        for (int c = 0; c < 3; c++)
            cin >> p[r][c];
    for (int r = 0; r < 3; r++)
        for (int c = 0; c < 3; c++)
        {
            int L = r - 1, U = r + 1, Lc = c - 1, Uc = c + 1;
            if (r == 0)
            {
                L = 0;
                U = 1;
            }
            if (r == 2)
            {
                L = 1;
                U = 2;
            }
            if (c == 0)
            {
                Lc = 0;
                Uc = 1;
            }
            if (c == 2)
            {
                Lc = 1;
                Uc = 2;
            }
            if (p[r][c] != 0)
                for (int i = L; i <= U; i++)
                    for (int j = Lc; j <= Uc; j++)
                    {
                        if (i == r || j == c)
                            a[i][j] += p[r][c];
                    }
        }

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
            if (a[r][c] % 2 == 0 && a[r][c] != 1)
                cout << 1;
            else
                cout << 0;
        cout << endl;
    }
    return 0;
}