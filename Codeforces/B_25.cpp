// https://codeforces.com/contest/25/problem/B
// solved 2013-08-27
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    int d;
    cin >> d >> n;
    cout << n[0];
    if (d > 2)
    {
        for (int i = 1; i < d - 2; i++)
        {
            cout << n[i];
            if (i % 2)
                cout << '-';
        }
        cout << n[d - 2];
    }
    if (d - 1)
        cout << n[d - 1];
    return 0;
}