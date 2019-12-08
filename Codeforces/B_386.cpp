// solved: 2014-01-17 02:08:39
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, t;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    vector<int> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    cin >> t;
    const int T = t;
    int sum = 1, m = 0, j;
    sort(s.begin(), s.end());
    for (int i = 1; i < n; i++)
    {
        j = i;
        while (s[j] - s[j - 1] <= t && j < n)
        {
            t -= s[j] - s[j - 1];
            sum++;
            j++;
        }
        m = max(m, sum);
        sum = 1;
        t = T;
    }
    cout << m;
    return 0;
}