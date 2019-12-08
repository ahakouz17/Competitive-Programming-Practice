// solved: 2014-01-10 14:50:16
// https://codeforces.com/contest/327/problem/B
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = n; i < n * 2; i++)
        cout << i << " ";
    return 0;
}