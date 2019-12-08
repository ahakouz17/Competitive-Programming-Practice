#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.length(); i++)
    {
        v.push_back(int(s[i] - '0'));
    }
    sort(v.begin(), v.end());
    int mini, in = 0, c = 0;
    while (v[in] == 0 && in < s.length())
    {
        c++;
        in++;
    }
    mini = v[in];
    if (s == "0")
    {
        cin >> s;
        if (s == "0" && s.length() == 1)
        {
            cout << "OK";
            return 0;
        }
    }
    else
        cin >> s;
    if (s.length() != v.size())
    {
        cout << "WRONG_ANSWER";
        return 0;
    }
    if (int(s[0] - '0') != mini)
    {
        cout << "WRONG_ANSWER";
        return 0;
    }
    else
    {
        int i = 0;
        if (c != 0)
            i += c + 1;
        while (c >= 1)
        {
            if (s[c] != '0')
            {
                cout << "WRONG_ANSWER";
                return 0;
            }
            c--;
        }
        for (i; i < s.length(); i++)
        {
            if (v[i] != int(s[i] - '0'))
            {
                cout << "WRONG_ANSWER";
                return 0;
            }
        }
    }
    cout << "OK";
    return 0;
}