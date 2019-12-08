// https://codeforces.com/contest/236/problem/A
// solved: 2013-08-25
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int letters[26] = {0};
    string name;
    cin >> name;

    for (int i = 0; i < name.size(); i++)
    {
        letters[name[i] - 97]++;
    }
    int n = 0;
    for (int i = 0; i < 26; i++)
    {
        if (letters[i])
            n++;
    }
    if (n % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}