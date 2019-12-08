// solved: 2013-11-28 20:58:58
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == 'h')
            break;
    }
    if (i > s.length() - 5)
    {
        cout << "NO" << endl;
        return 0;
    }
    for (i; i < s.length(); i++)
    {
        if (s[i] == 'e')
            break;
    }
    if (i > s.length() - 4)
    {
        cout << "NO" << endl;
        return 0;
    }
    for (i; i < s.length(); i++)
    {
        if (s[i] == 'l')
            break;
    }
    if (i > s.length() - 3)
    {
        cout << "NO" << endl;
        return 0;
    }
    for (i = i + 1; i < s.length(); i++)
    {
        if (s[i] == 'l')
            break;
    }
    if (i > s.length() - 2)
    {
        cout << "NO" << endl;
        return 0;
    }
    for (i; i < s.length(); i++)
    {
        if (s[i] == 'o')
            break;
    }
    if (i > s.length() - 1)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    return 0;
}