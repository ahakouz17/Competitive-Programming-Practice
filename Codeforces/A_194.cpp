// solved: 2013-12-22 11:02:08
#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    k = k - n * 2;
    if (k < n)
        cout << n - k;
    else
        cout << 0;
    return 0;
}