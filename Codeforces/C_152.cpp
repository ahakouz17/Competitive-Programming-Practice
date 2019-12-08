// https://codeforces.com/contest/152/problem/C
// solved: 2013-12-14 23:13:55
#include <iostream>
#include <vector>
using namespace std;
char book[100][100];
bool let[26];
int main()
{
    int N, M;
    unsigned long long sum = 1;
    cin >> N >> M;
    for (int r = 0; r < N; r++)
        for (int c = 0; c < M; c++)
            cin >> book[r][c];
    for (int m = 0; m < M; m++)
    {
        for (int i = 0; i < 26; i++)
            let[i] = false;
        unsigned long long s = 0;
        for (int n = 0; n < N; n++)
        {
            let[book[n][m] - 65] = true;
        }
        for (int i = 0; i < 26; i++)
            if (let[i])
                s++;
        sum = (sum * s) % 1000000007;
    }
    cout << sum;
    return 0;
}