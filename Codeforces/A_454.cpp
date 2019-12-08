#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n, b, e;
    scanf("%d", &n);
    b = n / 2 + 1;
    e = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= b && j <= e)
                printf("D");
            else
                printf("*");
        }
        if (i < n / 2 + 1)
        {
            b--;
            e++;
        }
        else
        {
            b++;
            e--;
        }
        printf("\n");
    }
    return 0;
}