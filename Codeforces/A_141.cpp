// solved: 2013-11-29 14:11:53
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s;
    int let[26] = {0};
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        let[s[i] - 65]++;
    }
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        let[s[i] - 65]++;
    }
    int pile[26] = {0};
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        pile[s[i] - 65]++;
    }
    int i = 0;
    while (pile[i] == let[i])
        i++;
    if (i == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}