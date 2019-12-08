// https://codeforces.com/contest/160/problem/A
// solved: 2013-08-25
#include <iostream>
using namespace std;
int main()
{
    int *cv;
    int n, temp;
    cin >> n;
    cv = new int[n];
    for (int i = 0; i < n; i++)
        cin >> cv[i];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (cv[j] > cv[i])
            {
                temp = cv[i];
                cv[i] = cv[j];
                cv[j] = temp;
            }
        }
    }

    int sum2 = 0, sum1 = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += cv[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum1 += cv[i];
        sum2 -= cv[i];
        c++;
        if (sum1 > sum2)
        {
            cout << c << endl;
            return 0;
        }
    }

    return 0;
}