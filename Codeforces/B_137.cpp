// solved: 2013-11-30 13:48:59
#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    int arr[5002] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr[temp]++;
    }
    int nz = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
            nz++;
    }
    cout << nz << endl;
    return 0;
}