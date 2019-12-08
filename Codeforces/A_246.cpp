// solved:2013-12-22 03:46:28
#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    if (n <= 2)
    {
        cout << -1;
        return 0;
    }
    for (int i = n; i > 0; i--)
        cout << i << " ";
    return 0;
}