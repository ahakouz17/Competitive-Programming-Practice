// https://codeforces.com/contest/219/problem/A
// solved: Aug/23/2013
#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{

    string sen;
    int k;
    cin >> k;

    map<char, int> s1;
    map<char, int> s2;

    for (int i = 0; i < 26; i++)
        s1[i + 97] = 0;

    cin >> sen;
    for (int i = 0; i < sen.size(); i++)
        s1[sen[i]]++;

    for (int i = 97; i <= 123; i++)
    {
        if (s1[i]) //!=0
        {
            if (s1[i] % k)
            {
                cout << -1;
                return 0;
            }
            else
                s2[i] = s1[i];
        }
    }
    int num = 0;
    for (int i = 0; i < k; i++)
    {
        for (map<char, int>::iterator it = s2.begin(); it != s2.end(); it++)
        {
            num = (it->second) / k;
            for (int a = 0; a < num; a++)
                cout << it->first;
        }
    }

    return 0;
}