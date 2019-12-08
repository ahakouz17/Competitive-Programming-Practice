// solved: 2013-12-23 06:19:31
#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    int arr[8] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 7 || temp == 5)
        {
            cout << -1;
            return 0;
        }
        else
            arr[temp]++;
    }
    if (arr[1] == n / 3 && arr[2] + arr[3] == n / 3 && arr[4] + arr[6] == n / 3 && arr[4] <= arr[2])
    {
        while (arr[2] && (arr[4] || arr[6]))
        {
            arr[2]--;
            cout << "1 2 ";
            if (arr[4])
            {
                arr[4]--;
                cout << 4 << endl;
            }
            else if (arr[6])
            {
                arr[6]--;
                cout << 6 << endl;
            }
        }
        while (arr[3] && arr[6])
        {
            arr[3]--;
            arr[6]--;
            cout << "1 3 6" << endl;
        }
    }
    else
        cout << -1;
    return 0;
}