// solved: 2013-12-01 01:49:24
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    int arr[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr[temp]++;
    }
    for (int i = 0; i < 1001; i++)
    {

        if (arr[i] > ceilf(float(n) / 2.0))
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}