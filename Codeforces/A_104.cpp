// solved: 2013-12-24
#include <iostream>
using namespace std;
int main()
{
    int p;
    cin >> p;
    if (p <= 10 || p >= 22)
    {
        cout << 0;
        return 0;
    }
    if (p == 20)
    {
        cout << 4 * 3 + 3;
        return 0;
    }
    else
        cout << 4;
    return 0;
}