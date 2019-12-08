// solved: 2014-01-16 00:23:48
#include <iostream>
using namespace std;
int main()
{
    char c;
    int sum;
    int s[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> c;
            if (c == '#')
                s[i][j] = 100;
            else
                s[i][j] = 5;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = s[i][j] + s[i][j + 1] + s[i + 1][j] + s[i + 1][j + 1];
            if (sum == 400 || sum == 20 || sum == 305 || sum == 115)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}