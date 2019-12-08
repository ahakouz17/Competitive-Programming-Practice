// solved: 2013-11-30 11:48:17
#include <iostream>
using namespace std;
int main()
{
    int n, h1, h2, t = 0;
    cin >> n;
    cin >> h1;
    t += h1 + 1;
    for (int i = 1; i < n; i++)
    {
        cin >> h2;
        (h2 >= h1) ? t += (h2 - h1) + 2 : t += (h1 - h2) + 2;
        h1 = h2;
    }
    cout << t << endl;
    return 0;
}