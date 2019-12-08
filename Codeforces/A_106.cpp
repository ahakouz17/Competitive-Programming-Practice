// solved: 2013-12-24 16:13:10
#include <iostream>
using namespace std;
int main()
{
    char tramp, a, b, c, d;
    cin >> tramp >> a >> c >> b >> d;
    int c1, c2;
    c1 = a - 48;
    c2 = b - 48;
    switch (a)
    {
    case 'T':
        c1 = 10;
        break;
    case 'J':
        c1 = 11;
        break;
    case 'Q':
        c1 = 12;
        break;
    case 'K':
        c1 = 13;
        break;
    case 'A':
        c1 = 14;
    }
    switch (b)
    {
    case 'T':
        c2 = 10;
        break;
    case 'J':
        c2 = 11;
        break;
    case 'Q':
        c2 = 12;
        break;
    case 'K':
        c2 = 13;
        break;
    case 'A':
        c2 = 14;
    }
    if (c == d || c == tramp)
    {
        if (c == d)
        {
            if (c1 > c2)
                cout << "YES";
            else
                cout << "NO";
            return 0;
        }
        if (c == tramp)
        {
            if (d == tramp)
            {
                if (c1 > c2)
                    cout << "YES";
                else
                    cout << "NO";
                return 0;
            }
            else
                cout << "YES";
            return 0;
        }
    }
    else
        cout << "NO";
    return 0;
}