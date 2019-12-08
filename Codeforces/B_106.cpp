// solved: 2013-12-24
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, cost = 1001;
    cin >> n;
    vector<vector<int>> lap(n, vector<int>(4, 0));
    for (int i = 0; i < n; i++)
    {
        cin >> lap[i][0] >> lap[i][1] >> lap[i][2] >> lap[i][3];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (lap[i][0] < lap[j][0] && lap[i][1] < lap[j][1] && lap[i][2] < lap[j][2])
            {
                lap[i][3] = 1001;
            }
        }
    }
    int in;
    for (int i = 0; i < n; i++)
    {
        if (lap[i][3] < cost)
        {
            cost = lap[i][3];
            in = i + 1;
        }
    }
    cout << in;
    return 0;
}