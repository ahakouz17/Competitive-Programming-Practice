#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
    int x, y, sum;
    scanf("%d%d", &x, &y);
    sum = abs(x) + abs(y);
    if (x > 0 && y > 0)
        printf("0 %d %d 0", sum, sum);
    else if (x > 0 && y < 0)
        printf("0 %d %d 0", -sum, sum);
    else if (x < 0 && y > 0)
        printf("%d 0 0 %d", -sum, sum);
    else
        printf("%d 0 0 %d", -sum, -sum);
    return 0;
}