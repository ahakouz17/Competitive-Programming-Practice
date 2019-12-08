// solved: 2013-12-25 00:39:45
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n, c = 0;
    string s;
    cin >> n >> s;
    if (s.length() <= n)
    {
        cout << 0;
        return 0;
    }
    for (int i = n; i < s.length(); i += n)
    {
        if (s[i - 1] == s[i - 2] && s[i - 2] == s[i - 3])
            c++;
    }
    cout << c;
    return 0;
}