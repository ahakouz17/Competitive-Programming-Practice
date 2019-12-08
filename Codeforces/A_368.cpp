// solved: 2013-11-26 19:52:41
#include <iostream>
using namespace std;
int main()
{
    int n, d, sum = 0, m;
    cin >> n >> d;
    const int N = n;
    int hook[N];
    for (int i = 0; i < n; i++)
    {
        cin >> hook[i];
        sum += hook[i];
    }
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (hook[j] < hook[i])
            {
                temp = hook[i];
                hook[i] = hook[j];
                hook[j] = temp;
            }
        }
    }
    cin >> m;
    if (m == n)
        cout << sum << endl;
    else if (m < n)
    {
        sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum += hook[i];
        }
        cout << sum << endl;
    }
    else
    {
        sum -= d * (m - n);
        cout << sum << endl;
    }

    return 0;
}