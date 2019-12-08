// solved:2013-12-22 05:12:20
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int c1 = 0, o1 = 0, c2 = 0, o2 = 0, n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
            c1++;
        else
            o1++;
        cin >> a;
        if (a == 0)
            c2++;
        else
            o2++;
    }
    cout << min(o2 + c1, min(o1 + o2, min(c1 + c2, o1 + c2)));
    return 0;
}