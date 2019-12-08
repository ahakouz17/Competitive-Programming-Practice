// solved: 2014-01-05 19:04:35
#include <iostream>
using namespace std;
int main()
{
    int n, twen = 0, fi = 0, temp, c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 25)
            twen++;
        if (temp == 50)
        {
            if (twen < 1)
            {
                cout << "NO";
                return 0;
            }
            else
            {
                twen--;
                fi++;
            }
        }
        if (temp == 100)
        {
            if (twen == 0 || (fi == 0 && twen < 3))
            {
                cout << "NO";
                return 0;
            }
            if (fi == 0)
                twen -= 3;
            else
            {
                fi--;
                twen--;
            }
        }
    }
    cout << "YES";
    return 0;
}