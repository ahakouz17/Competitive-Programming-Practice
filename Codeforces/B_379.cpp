// solved: 2013-12-30 20:23:06
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0;
    if (a[0] != 0)
    {
        cout << "P";
        a[0]--;
        while (a[0] > 0)
        {
            cout << "RLP";
            a[0]--;
        }
    }
    for (i = 1; i < n; i++)
    {
        if (a[i] == 0)
        {
            cout << "R";
            continue;
        }
        cout << "RP";
        a[i]--;
        while (a[i] > 0)
        {
            cout << "LRP";
            a[i]--;
        }
    }
    return 0;
}