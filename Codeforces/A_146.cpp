// solved: 2014-01-10 13:43:12
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    string tic;
    cin >> n >> tic;
    string s1, s2;
    s1 = tic.substr(0, n / 2);
    s2 = tic.substr(n / 2, n / 2);
    size_t f1 = count(s1.begin(), s1.end(), '4');
    size_t f2 = count(s2.begin(), s2.end(), '4');
    size_t se1 = count(s1.begin(), s1.end(), '7');
    size_t se2 = count(s2.begin(), s2.end(), '7');
    if (f1 + se1 + f2 + se2 != n)
    {
        cout << "NO";
        return 0;
    }
    if (f1 * 4 + se1 * 7 != f2 * 4 + se2 * 7)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}