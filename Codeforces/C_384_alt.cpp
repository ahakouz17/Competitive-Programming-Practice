// solved: 2015-10-17 15:15:51
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int n, no_right = 0, temp;
    scanf("%i", &n);
    long long int cost = 0;
    int no_cows = n;
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &temp);
        if (!temp)
            cost += no_right;
        else
            no_right++;
    }
    printf("%I64d\n", cost);
}