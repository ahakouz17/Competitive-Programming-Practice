#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    int n, temp, sum = 0, mini = 1000000;
    scanf("%d", &n);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < v[i]; j++)
        {
            scanf("%d", &temp);
            sum += temp;
        }
        sum = sum * 5 + v[i] * 15;
        // printf("%d\n",sum);
        mini = min(mini, sum);
    }
    printf("%d\n", mini);
    return 0;
}