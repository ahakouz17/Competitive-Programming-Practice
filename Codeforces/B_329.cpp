// solved: 2014-10-06 12:36:12
// https://codeforces.com/contest/329/problem/B
#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;
char f[1001][1001];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int d[1001][1001];

int main()
{
    int r, c, iE, iS, jE, jS;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> f[i][j];
            if (f[i][j] == 'E')
            {
                jE = j, iE = i;
            }
            else if (f[i][j] == 'S')
            {
                jS = j;
                iS = i;
            }
            //cout<<d[i][j]<<" ";
        }
        //cout<<endl;
    }
    int sum = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(iE, jE));
    while (q.empty() == false)
    {
        pair<int, int> p = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int R = p.first + dx[i], C = p.second + dy[i];
            if (R < 0 || C < 0 || R >= r || C >= c)
                continue;
            if (f[R][C] != 'T' && d[R][C] == 0)
            {
                d[R][C] += d[p.first][p.second] + 1;
                q.push(make_pair(R, C));
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (f[i][j] >= '0' && f[i][j] <= '9' && d[i][j] <= d[iS][jS] && d[i][j] > 0)
            {
                sum += int(f[i][j] - 48);
                // cout<<f[i][j]<<endl;
            }
        }
    }
    cout << sum << endl;
    return 0;
}