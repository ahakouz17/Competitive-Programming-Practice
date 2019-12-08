// https://codeforces.com/contest/116/problem/A
// solved: Aug/24/2013
#include <iostream>
using namespace std;
int main()
{
    int *a;
    int *b;
    int n;

    cin >> n;
    a = new int[n];
    b = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int max = 0, num = 0;

    for (int i = 0; i < n; i++)
    {
        num += b[i] - a[i];
        if (num > max)
            max = num;
    }
    cout << max << endl;

    return 0;
}
