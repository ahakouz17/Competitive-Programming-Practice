// https://codeforces.com/contest/268/problem/B
// solved: 2013-11-27 21:55:19
#include <iostream>
using namespace std;
int main()
{
    int n, st, sum = 0;
    cin >> n;
    st = n - 1;
    for (int i = 1; i <= n; i++)
    {
        sum += i * st + 1;
        st--;
    }
    cout << sum << endl;
    return 0;
}