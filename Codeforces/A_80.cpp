#include <iostream>
using namespace std;
bool arr[51];
void primeGen()
{
    int count = 1;
    for (int i = 0; i < 51; ++i)
        arr[i] = true;
    for (int i = 2; i <= 50; i++)
    {
        for (int j = 2; (j * i) <= 50; ++j)
            arr[i * j] = false;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    primeGen();
    for (int i = n + 1; i < m; i++)
    {
        if (arr[i])
        {
            cout << "NO";
            return 0;
        }
    }
    if (arr[m])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}