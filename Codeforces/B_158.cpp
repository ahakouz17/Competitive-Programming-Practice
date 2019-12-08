// https://codeforces.com/contest/158/problem/B
// solved: Aug/21/2013
#include <iostream>
using namespace std;
int main()
{
    int n, t = 0, a;
    int arr[5] = {0};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr[a]++;
    }

    t = arr[4] + arr[2] / 2;
    arr[2] = arr[2] % 2;

    if (arr[3] == arr[1] && arr[3] != 0)
        t += arr[1] + arr[2];
    else
    {
        if (arr[1] > arr[3])
        {
            t += arr[3];
            arr[1] -= arr[3];
            if (arr[2])
            {
                t += arr[2];
                arr[1] -= 2;
            }
            if (arr[1] >= 4)
            {
                t += arr[1] / 4;
                arr[1] = arr[1] % 4;
            }
            if (arr[1] > 0)
                t++;
        }
        else
        {
            t += arr[1];
            arr[3] -= arr[1];
            t += arr[2] + arr[3];
        }
    }
    cout << t << endl;
    return 0;
}