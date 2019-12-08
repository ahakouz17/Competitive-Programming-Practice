#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    sort(v.begin(), v.end());
    int limit = v[n - 1], c = 2, in = 1, sum = v[0];
    while (sum < limit && in < n)
    {
        if (sum + v[in] <= limit)
        {
            c++;
            sum += v[in];
        }
        else
            break;
        in++;
    }
    cout << c;
    return 0;
}