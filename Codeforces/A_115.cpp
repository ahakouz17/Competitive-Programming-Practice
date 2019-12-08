// solved: 2014-09-27 14:58:59
// https://codeforces.com/contest/115/problem/A
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 2001;
bool vis[N] = {0};
vector<int> g[N];
vector<int> d(N, 0);

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    while (q.empty() == 0)
    {
        int node = q.front();
        vis[node] = true;
        q.pop();
        for (int i = 0; i < g[node].size(); i++)
        {
            int v = g[node][i];
            if (vis[v] == 0)
            {
                q.push(v);
                vis[v] = true;
                d[v] = d[node] + 1;
            }
        }
    }
}

int main()
{
    int n, temp;
    cin >> n;
    vector<int> roos;

    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        if (temp == -1)
            roos.push_back(i);
        else
            g[temp].push_back(i);
    }

    for (int i = 0; i < roos.size(); i++)
        bfs(roos[i]);

    sort(d.begin(), d.end());
    cout << d[N - 1] + 1;

    return 0;
}