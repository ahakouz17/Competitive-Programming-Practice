// solved: 2014-01-20 19:43:16
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    if ((n * n) % 2 == 0)
        cout << (n * n / 2) << endl;
    else
        cout << (n * n / 2 + 1) << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j += 2)
            if (i % 2 == 0)
            {
                cout << 'C';
                if (j < n - 1)
                    cout << '.';
            }
            else if (i % 2 != 0)
            {
                cout << '.';
                if (j < n - 1)
                    cout << 'C';
            }
        cout << endl;
    }
    return 0;
}