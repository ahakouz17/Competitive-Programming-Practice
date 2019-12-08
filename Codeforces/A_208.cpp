// solved: 2013-12-11 11:35:19
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool f = false;
    for (int i = 0; i < s.length();)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 3;
            if (f)
            {
                cout << " ";
                f = false;
            }
        }
        else
        {
            cout << s[i];
            i++;
            f = true;
        }
    }

    return 0;
}