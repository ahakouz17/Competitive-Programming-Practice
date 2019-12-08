#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, in = 0;
    cin >> n;
    cout << n * n / 2 + n % 2 << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (in % 2 == 0)
                cout << 'C';
            else
                cout << '.';
            in++;
        }

        in += (n + 1) % 2;
        cout << endl;
    }
    return 0;
}