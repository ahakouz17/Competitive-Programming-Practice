// https://codeforces.com/contest/158/problem/A
// solved: Aug/21/2013

#include <iostream>
using namespace std;
int main()
{
    int *scores;
    int n, k, p = 0;

    cin >> n >> k;
    scores = new int[n];
    for (int i = 0; i < n; i++)
        cin >> scores[i];
    int o = 0;
    while (scores[o] > 0 && (o + 1) <= k)
    {
        p++;
        o++;
    }
    int j = k;
    while (scores[j] == scores[k - 1] && scores[k - 1] != 0)
    {
        p++;
        j++;
    }
    cout << p;
    return 0;
}