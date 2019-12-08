#include <iostream>
using namespace std;

int main()
{
    int n, arr[2001];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        int j = i;
        int m = 0;
        while (j != -1)
        {
            m++;
            j = arr[j];
        }
        res = max(res, m);
    }
    cout << res;

    return 0;
}