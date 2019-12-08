// https://codeforces.com/contest/160/problem/B
// solved: 2013-11-30 16:04:20
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    char temp;
    vector<int> h1;
    vector<int> h2;
    //---------------------------------
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        h1.push_back(temp - 48);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        h2.push_back(temp - 48);
    }
    sort(h1.begin(), h1.end());
    sort(h2.begin(), h2.end());
    //---------------------------------
    if (n == 1)
    {
        if (h1[0] == h2[0])
        {
            cout << "NO" << endl;
            return 0;
        }
        else
            cout << "YES" << endl;
        return 0;
    }
    if (h1[0] > h2[0])
    {
        int i = 0;
        while (h1[i] > h2[i] && i < n)
        {
            i++;
        }
        if (i == n)
        {
            cout << "YES" << endl;
            return 0;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    if (h1[0] < h2[0])
    {
        int i = 0;
        while (h1[i] < h2[i] && i < n)
        {
            i++;
        }
        if (i == n)
        {
            cout << "YES" << endl;
            return 0;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    else
        cout << "NO" << endl;
    return 0;
}