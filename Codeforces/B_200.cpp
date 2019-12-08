// solved: 2013-12-17 03:11:29
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double temp, p, sum = 0, f;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
    }
    f = sum / n;
    cout << setprecision(7) << f;
    return 0;
}