// solved: 2013-12-01 01:03:34
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    vector<int> res;
    if (b >= x || (a == x && b >= a))
    {
        cout << 0 << endl;
        return 0;
    }
    const int A = a;
    const int B = b;
    if (a <= b)
        a = b + 1;
    while (a <= x && b <= y)
    {
        if (a > b)
        {
            res.push_back(a);
            res.push_back(b);
        }
        b++;
        if (b > y && a < x)
        {
            b = B;
            a++;
        }
    }
    cout << res.size() / 2 << endl;
    for (int i = 0; i < res.size(); i += 2)
    {
        cout << res[i] << " " << res[i + 1] << endl;
    }

    return 0;
}