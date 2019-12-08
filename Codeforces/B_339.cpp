// https://codeforces.com/contest/339/problem/B
// solved: 2013-08-26
#include <iostream>

using namespace std;
int main()
{
    long int n, m, ai, a;
    cin >> n >> m;
    long long int nh = 0;
    a = 1;
    for (int i = 0; i < m; i++)
    {
        cin >> ai;
        if (ai > a)
            nh += ai - a;
        else if (ai < a)
            nh += n - a + ai;
        a = ai;
    }
    cout << nh << endl;
    return 0;
}