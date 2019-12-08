// solved: 2013-12-11 11:14:20
#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    const int N = n + 1;
    int gifts[N];
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        gifts[temp] = i;
    }
    for (int i = 1; i <= n; i++)
        cout << gifts[i] << " ";
    return 0;
}