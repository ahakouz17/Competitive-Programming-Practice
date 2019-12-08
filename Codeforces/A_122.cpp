// https://codeforces.com/contest/122/problem/A
// solved: 2013-08-27 

#include <iostream>
using namespace std;

int main()
{
    int n, d = 1;
    int a1[6];
    cin >> n;
    for (int i = 0; i < 6; i += 2)
    {
        a1[i] = 4 * d;
        a1[i + 1] = 7 * d;
        d *= 10;
    }
    for (int i = 0; i < 2; i++)
    {
        if (n % a1[i] == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
        for (int j = 2; j < 4; j++)
        {
            if ((n % (a1[j] + a1[i])) == 0)
            {
                cout << "YES" << endl;
                return 0;
            }

            for (int h = 4; h < 6; h++)
            {
                if ((n % (a1[h] + a1[j] + a1[i])) == 0)
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;

    return 0;
}