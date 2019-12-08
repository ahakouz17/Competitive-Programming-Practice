// solved: 2013-12-16 16:00:56
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n, temp, sum = 0, rem;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
    }
    (sum % n == 0) ? printf("%d", n) : printf("%d", n - 1);
    return 0;
}