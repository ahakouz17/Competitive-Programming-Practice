// solved: 2013-12-22 02:13:02
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, temp;
    cin >> n >> m;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp < 0)
            neg.push_back(temp);
    }
    int sum = 0;
    sort(neg.begin(), neg.end());
    if (neg.size() == 0)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < m; i++)
    {
        if (i >= neg.size())
            break;
        sum += neg[i];
    }
    cout << -1 * sum;
    return 0;
}