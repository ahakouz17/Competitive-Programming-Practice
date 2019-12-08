// solved: 2014-03-06 21:40:45
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> r(101, 0);
    vector<int> c(101, 0);
    int x, y, sr = 0, sc = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (r[x]++ == 0)
            sr++;
        if (c[y]++ == 0)
            sc++;
    }
    cout << min(sr, sc);
    return 0;
}