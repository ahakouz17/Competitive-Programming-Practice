// https://codeforces.com/contest/37/problem/A
// Author: Asma Hakouz
// Solved: Aug/14/2013
#include <iostream>
using namespace std;

void main()
{
    int n, l, c = 0, max = 0;
    cin >> n;
    int len[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> l;
        if (!len[l]++)
            c++;
        if (len[l] > max)
            max++;
    }
    cout << max << "  " << c << endl;
}