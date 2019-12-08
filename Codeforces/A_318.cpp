// solved: 2013-12-28 15:46:18
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    long long n, k, s;
    cin >> n >> k;
    if (k > (n / 2 + n % 2))
    {
        s = 2 * (k - (n / 2 + n % 2));
        printf("%I64d", s);
    }
    else
    {
        s = k * 2 - 1;
        printf("%I64d", s);
    }
    return 0;
}