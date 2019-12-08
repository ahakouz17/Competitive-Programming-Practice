// solved: 2013-11-28 08:32:51
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int c1 = 0, c2 = 0;
    while (c2 < s2.length())
    {
        if (s1[c1] == s2[c2])
            c1++;
        c2++;
    }
    cout << c1 + 1 << endl;

    return 0;
}