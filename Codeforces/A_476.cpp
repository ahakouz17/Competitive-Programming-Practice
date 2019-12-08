#include <stdio.h>
int main()
{
    int n, m, max_limit, min_limit;
    scanf("%d%d", &n, &m);
    if (n < m)
    {
        printf("-1");
        return 0;
    }
    max_limit = n;
    min_limit = n / 2 + n % 2;
    if (min_limit < m)
    {
        printf("%d", m);
        return 0;
    }
    while (min_limit <= max_limit)
    {
        if (min_limit % m == 0)
        {
            printf("%d", min_limit);
            return 0;
        }
        min_limit++;
    }
    printf("-1");

    return 0;
}