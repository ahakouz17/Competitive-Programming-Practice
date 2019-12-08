#include <iostream>
#include <memory.h>
using namespace std;
bool arr[100030];
int main()
{
    int n, k, c = 1, in = 2, past;
    cin >> n >> k;
    cout << 1 << " ";
    memset(arr, false, sizeof(arr));
    int sig = 1;
    past = 1;
    while (c != n)
    {
        if (k != 1)
        {
            cout << past + sig * k << " ";
            arr[past + sig * k] = true;
            past = past + sig * k;
            sig *= -1;
            k--;
            c++;
        }
        else
        {
            while (arr[in])
                in++;
            cout << in << " ";
            in++;
            c++;
        }
    }
    return 0;
}