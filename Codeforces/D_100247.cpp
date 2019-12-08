// solved: 2014-01-31 04:22:08
// https://codeforces.com/gym/100247/problem/D
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    string a, b, c, f = "";
    cin >> n >> a >> b >> c;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == c[i])
            f += c[i];
        else
            f += a[i];
    }
    cout << f;
    return 0;
}