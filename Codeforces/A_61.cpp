// https://codeforces.com/contest/61/problem/A
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
            s1[i] = '1';
        else
            s1[i] = '0';
        cout << s1[i];
    }

    return 0;
}