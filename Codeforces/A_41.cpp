// solved: 2013-12-22 02:41:15
#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int s_in = s.length() - 1;
    char temp;
    cin >> temp;
    if (temp != s[s_in])
    {
        cout << "NO" << endl;
        return 0;
    }
    //    s_in--;
    while (temp == s[s_in] && s_in > 0)
    {
        s_in--;
        cin >> temp;
    }
    (s_in == 0) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}