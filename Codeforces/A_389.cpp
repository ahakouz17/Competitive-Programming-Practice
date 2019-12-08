// solved: 2014-02-03 19:54:05
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> m(n);
    for (int i = 0; i < n; i++)
        cin >> m[i];
    sort(m.begin(), m.end());
    while (m[0] != m[n - 1])
    {
        for (int i = n - 1; i > 0; i--)
        {
            int c = i - 1;
            if (m[i] != m[c])
                m[i] -= m[c];
            else
            {
                c--;
                while (m[i] == m[c] && c >= 0)
                    c--;
            }
        }
        sort(m.begin(), m.end());
    }
    cout << m[0] * n;
    return 0;
}