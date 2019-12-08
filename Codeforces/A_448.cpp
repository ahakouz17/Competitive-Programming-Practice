#include <stdio.h>
int main()
{
    int n, sum = 0, temp, shelves = 0;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &temp);
        sum += temp;
    }
    shelves += sum / 5;
    if (sum % 5 != 0)
        shelves++;
    sum = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &temp);
        sum += temp;
    }
    shelves += sum / 10;
    if (sum % 10 != 0)
        shelves++;
    scanf("%d", &n);
    if (shelves > n)
        printf("NO");
    else
        printf("YES");
    return 0;
}