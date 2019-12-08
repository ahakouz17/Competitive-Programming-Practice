// https://codeforces.com/contest/276/problem/B
// solved: 2013-12-02 23:10:34
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int let[26] = {0};
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        let[s[i] - 97]++;
    }
    int i = 0, o = 0;
    while (i < 26)
    {
        if (let[i] % 2 != 0)
        {
            o++;
        }
        i++;
    }
    if ((s.length() % 2 != 0 && o % 2 != 0) || (s.length() % 2 == 0 && o == 0))
        cout << "First" << endl;
    else
        cout << "Second" << endl;
    return 0;
}