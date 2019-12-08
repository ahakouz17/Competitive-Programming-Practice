// https://codeforces.com/contest/96/problem/A
// solved: Aug/24/2013
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int t, c = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            c++;
        else
        {
            c = 1;
        }
        if (c >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
