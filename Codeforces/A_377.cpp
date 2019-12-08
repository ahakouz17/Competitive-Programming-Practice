// solved: 2014-09-09 12:10:20
// https://codeforces.com/contest/377/problem/A
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int n, m, rem;
const int N = 506, M = 506;
char arr[N][M];
int dr[4] = {0, 1, 0, -1};
int dc[4] = {1, 0, -1, 0};
void bfs(int r, int c)
{
    if (r < 0 || r >= n || c < 0 || c >= m || arr[r][c] == '#' || arr[r][c] == '.')
        return;
    if (rem == 0)
        return;
    arr[r][c] = '.';
    rem--;
    for (int i = 0; i < 4; i++)
    {
        bfs(r + dr[i], c + dc[i]);
    }
}

int main()
{
    string s;
    int sum = 0;
    cin >> n >> m >> rem;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '.')
            {
                arr[i][j] = 'X';
                sum++;
            }
            else
                arr[i][j] = '#';
        }
    }

    rem = sum - rem;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bfs(i, j);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}