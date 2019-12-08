// solved: 2013-12-22 01:55:41
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n, k, a, p, r = 0;
    cin >> n >> k;
    vector<pair<int, int>> ranks(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> p;
        ranks[i] = make_pair(a, -1 * p);
    }
    sort(ranks.begin(), ranks.end());
    reverse(ranks.begin(), ranks.end());
    int i = 1, teams = 1;
    bool out = false;
    //for(int i=0; i<n; i++)
    //  cout<<ranks[i].first<<" "<<ranks[i].second<<endl;

    while (r <= n)
    {
        if (i == k)
            out = true;
        if (out)
        {
            if (ranks[i].first == ranks[i - 1].first && ranks[i].second == ranks[i - 1].second)
                teams++;
            else
                break;
        }
        else
        {
            if (ranks[i].first == ranks[i - 1].first && ranks[i].second == ranks[i - 1].second)
                teams++;
            else
                teams = 1;
        }
        r++;
        i++;
    }
    cout << teams;
    return 0;
}
