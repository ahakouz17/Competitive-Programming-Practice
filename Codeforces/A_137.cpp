// solved: 2013-11-28 09:16:36
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 1, inc = 0;
    char temp = s[0];
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != temp || inc == 5)
        {
            c++;
            temp = s[i];
            inc = 1;
        }
        else if (s[i] == temp)
        {
            inc++;
        }
    }
    cout << c << endl;
    return 0;
}
