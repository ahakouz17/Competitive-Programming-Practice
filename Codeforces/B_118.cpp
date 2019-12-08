// https://codeforces.com/contest/118/problem/B
// solved: 2013-11-05 01:46:14
#include <iostream>
using namespace std;
int main()
{
    int n, nos;
    cin >> n;

    for (int j = 0; j < n; j++)
    {
        nos = n - j;
        for (int i = nos; i > 0; i--)
            cout << "  ";
        for (int i = 0; i <= j; i++)
            (j == 0) ? cout << i : cout << i << " ";
        for (int i = j - 1; i >= 0; i--)
            (i == 0) ? cout << i : cout << i << " ";
        cout << endl;
    }
    for (int i = 0; i < n + 1; i++)
        cout << i << " ";
    for (int i = n - 1; i > 0; i--)
        cout << i << " ";
    cout << 0 << endl;
    for (int j = 0; j < n; j++)
    {
        nos = j + 1;
        for (int i = nos; i > 0; i--)
            cout << "  ";
        for (int i = 0; i < n - j; i++)
            (j == n - 1) ? cout << i : cout << i << " ";

        for (int i = n - j - 2; i >= 0; i--)
            (i == 0) ? cout << i : cout << i << " ";
        cout << endl;
    }

    return 0;
}