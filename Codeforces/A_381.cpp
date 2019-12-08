// solved: 2014-01-15 01:04:12
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int b = 0, e = n - 1, p1 = 0, p2 = 0;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    while (e >= b)
    {
        if (c[b] > c[e])
        {
            p1 += c[b];
            b++;
        }
        else
        {
            p1 += c[e];
            e--;
        }
        if (e < b)
            break;
        if (c[b] > c[e])
        {
            p2 += c[b];
            b++;
        }
        else
        {
            p2 += c[e];
            e--;
        }
    }
    cout << p1 << " " << p2;
    return 0;
}