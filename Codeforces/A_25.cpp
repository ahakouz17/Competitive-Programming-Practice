// https://codeforces.com/contest/25/problem/A
// solved: Aug/24/2013
#include <iostream>
using namespace std;
int main()
{

    int n, e = 0, o = 0;
    int *num;
    cin >> n;
    num = new int[n];
    for (int i = 0; i < n; i++)
        cin >> num[i];

    int chck = 0;
    if ((num[0] % 2 && num[1] % 2) || (num[0] % 2 && num[2] % 2) || (num[1] % 2 && num[2] % 2))
    {
        for (int i = 0; i < n; i++)
            if (!(num[i] % 2))
            {
                cout << i + 1 << endl;
                return 0;
            }
    }
    else
        for (int i = 0; i < n; i++)
            if ((num[i] % 2))
            {
                cout << i + 1 << endl;
                return 0;
            }
    return 0;
}