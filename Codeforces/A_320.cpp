// solved:2013-11-28 09:01:50
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length();)
    {
        if (s.substr(i, 3) == "144")
            i += 3;
        else if (s.substr(i, 2) == "14")
            i += 2;
        else if (s.substr(i, 1) == "1")
            i++;
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}