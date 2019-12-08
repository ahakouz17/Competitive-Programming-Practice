// solved: 2014-03-06 21:39:36
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i, l = 0, r = 0, l1 = 0, l2 = 0;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] != '=')
        {
            if (s[i] != '+')
                l++;
            else
                l1 = i;
        }
        else
            break;
    }
    l2 = i - l1 - 1;
    r = s.length() - 1 - i;
    if (l == r)
    {
        cout << s;
        return 0;
    }
    if (abs(l - r) != 2)
        cout << "Impossible";
    else if (l > r)
    {
        if (l1 > (l - r) / 2)
        {
            cout << string(l1 - (l - r) / 2, '|') << '+' << string(l2, '|') << '=' << string(r + (l - r) / 2, '|') << endl;
        }
        else
        {
            cout << "|+" << string(l2 - ((l - r) / 2 - l1 + 1), '|') << '=' << string(r + (l - r) / 2, '|') << endl;
        }
    }
    else
    {
        cout << string((r - l) / 2 + l1, '|') << '+' << string(l2, '|') << '=' << string(r - (r - l) / 2, '|') << endl;
    }
    return 0;
}