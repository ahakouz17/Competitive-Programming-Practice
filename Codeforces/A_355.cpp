// solved: 2013-12-01 01:29:09
#include <iostream>
using namespace std;
int main()
{
    int n, k;

    cin >> n >> k;
    if (k == 0 && n > 1)
        cout << "No solution" << endl;
    else
    {
        cout << k;
        for (int i = 1; i < n; i++)
            cout << 0;
        cout << endl;
    }
    return 0;
}