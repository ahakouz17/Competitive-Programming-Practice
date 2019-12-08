// solved: 2013-10-16 19:41:52
#include <iostream>
using namespace std;
int main()
{
    long long int n;
    int k, l = 98, flip = 0;
    cin >> n >> k;
    if ((k == 1 && n > 1) || (k > n))
    {
        cout << -1 << endl;
        return 0;
    }
    if (k == 1 && n == 1)
    {
        cout << 'a' << endl;
        return 0;
    }

    for (int j = 0; j < (n - (k - 2)); j++)
    {
        if (flip == 0)
        {
            l--;
            flip++;
        }
        else
        {
            flip = 0;
            l++;
        }
        cout << static_cast<char>(l);
    }
    l = 99;
    int p;
    for (p = (n - (k - 2)); p < n; p++)
    {
        cout << static_cast<char>(l);
        l++;
    }

    return 0;
}