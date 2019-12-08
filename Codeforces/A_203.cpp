// solved: 2013-12-17 01:10:26
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x, a, b, t, da, db;
    cin >> x >> t >> a >> b >> da >> db;
    if (x == 0)
    {
        cout << "YES";
        return 0;
    }
    vector<int> A;
    vector<int> B;
    for (int i = 0; i <= t - 1; i++)
    {
        A.push_back(a - da * i);
        B.push_back(b - db * i);
    }
    A.push_back(0);
    B.push_back(0);
    for (int i = 0; i <= t; i++)
    {
        for (int j = 0; j <= t; j++)
        {
            if (A[i] + B[j] == x)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}