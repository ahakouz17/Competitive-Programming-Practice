#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool vis[200];
int main()
{
    int n;
    cin >> n;
    int clw = 0, cclw = 0, past, curr;
    vector<pair<int, int>> g[200];
    int a, b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        g[a].push_back(make_pair(b, c));
        g[b].push_back(make_pair(-a, c));
    }
    int ind, paths = 0;
    past = 0;
    vis[1] = true;
    while (paths != n)
    {
        paths++;
        if (past == 0)
            past++;
        int temp = abs(g[past][0].first);
        if (temp == 1)
        {
            if (paths == n)
                ind = 0;
            else
                ind = 1;
        }
        else
        {
            if (vis[temp] == false)
                ind = 0;
            else
                ind = 1;
        }
        temp = g[past][ind].first;
        if (temp > 0)
            clw += g[past][ind].second;
        else
            cclw += g[past][ind].second;
        temp = abs(temp);
        vis[temp] = true;
        past = temp;
    }
    cout << min(clw, cclw);
    return 0;
}