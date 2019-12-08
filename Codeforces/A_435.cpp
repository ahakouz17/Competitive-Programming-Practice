#include <stdio.h>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n, m, temp;
    scanf("%d%d", &n, &m);
    const int M = m;
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        q.push(temp);
    }

    int c = 0;
    while (q.empty() == false)
    {
        int rem = m;
        while (rem > 0 && q.empty() == false)
        {
            if (q.front() <= rem)
            {
                rem -= q.front();
                q.pop();
            }
            else
            {
                break;
            }
        }
        c++;
    }
    printf("%d", c);
    return 0;
}