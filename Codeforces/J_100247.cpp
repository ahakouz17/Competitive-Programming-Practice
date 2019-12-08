// solved: 2014-01-31 04:52:18
#include <iostream>
using namespace std;
int main()
{
    int n, m = 0;
    cin >> n;
    pair<int, int> a, b = make_pair(-1, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> a.first >> a.second;
        if (a.first > b.first)
            b = a;
        m = max(m, b.second);
    }
    cout << m;
    return 0;
}