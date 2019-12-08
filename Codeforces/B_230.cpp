#include <iostream>
#include <cmath>
#include <vector>
#include <stdio.h>
#include <memory.h>
using namespace std;

bool isPrime[1000100];

void primes()
{
    for (int i = 2; i < (1000009 / 2); i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * 2; j < 1000009; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    int n;
    long long int t, temp;
    memset(isPrime, true, 1000100);
    isPrime[1] = false;
    primes();

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%I64d", &temp);
        t = sqrt(temp);
        if (t * t != temp)
        {
            printf("NO\n");
        }
        else
        {
            if (isPrime[t] == true)
            {
                printf("YES\n");
            }
            else
                printf("NO\n");
        }
    }
    return 0;
}