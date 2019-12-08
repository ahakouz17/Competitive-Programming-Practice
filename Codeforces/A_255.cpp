// solved: 2013-11-29 22:10:55
#include <iostream>
using namespace std;
int main()
{
    int n, num, ch = 0, bi = 0, ba = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (i == 0 || (i >= 3 && i % 3 == 0))
            ch += num;
        if (i == 1 || (i >= 3 && (i - 1) % 3 == 0))
            bi += num;
        if (i == 2 || (i >= 3 && (i - 2) % 3 == 0))
            ba += num;
    }
    if (ch > bi && ch > ba)
    {
        cout << "chest" << endl;
        return 0;
    }
    else if (ba > bi)
    {
        cout << "back" << endl;
        return 0;
    }
    else
    {
        cout << "biceps" << endl;
        return 0;
    }
    return 0;
}