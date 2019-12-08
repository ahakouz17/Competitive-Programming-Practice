// solved: 2014-01-05 18:49:51
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, z = 0, f = 0, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        (temp == 0) ? z++ : f++;
    }
    if (z == 0)
        cout << -1;
    else if (f == 0 || f / 9 == 0)
        cout << 0;
    else
    {
        temp = f / 9;
        for (int i = 0; i < temp; i++)
            cout << string(9, '5');
        cout << string(z, '0');
    }
    return 0;
}