// solved: 2014-02-07 14:01:19
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, c;
    cin >> n >> c;
    vector<int> d(n);
    for (int i = 0; i < n; i++)
        cin >> d[i];
    int m = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (d[i + 1] < d[i] - c)
            m = max(d[i] - c - d[i + 1], m);
    }
    cout << m;
    return 0;
}