// solved: 2013-12-28 15:12:37
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    const int N = n;
    n *= n;
    vector<vector<int>> can(N, vector<int>(n / N));
    for (int i = 0; i < N; i++)
    {
        int u = n - i, l = 1 + i, in = 0;
        while (u > l)
        {
            can[i][in] = u;
            can[i][in + 1] = l;
            in += 2;
            u -= n / N;
            l += n / N;
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < n / N; j++)
        {
            cout << can[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}