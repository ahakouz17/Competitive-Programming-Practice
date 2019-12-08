#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", v[i]);
    }
    printf("%d", v[n - 1]);
    return 0;
}