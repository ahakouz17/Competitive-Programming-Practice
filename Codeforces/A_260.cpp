// solved: 2013-12-22 02:29:55
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    a = a * 10;
    for (int i = 0; i <= 9; i++)
    {
        if ((a + i) % b == 0)
        {
            cout << a + i;
            cout << string(n - 1, '0');
            return 0;
        }
    }
    cout << -1;
    return 0;
}