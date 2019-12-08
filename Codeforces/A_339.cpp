// https://codeforces.com/contest/339/problem/A
// solved: 2013-8-26
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sum;
    cin >> sum;
    int n, j = 0;
    n = sum.size() / 2 + 1;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        num[i] = sum[j] - 48;
        j += 2;
    }

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[j] < num[i])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << num[i];
        if (i < n - 1)
            cout << "+";
    }

    return 0;
}
