// solved: 2013-11-29 20:09:04
#include <iostream >
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n, x1, y1, x2, y2;
    double k;
    cin >> n >> k;
    cin >> x1 >> y1;
    long double sum = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> x2 >> y2;
        sum += sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        y1 = y2;
        x1 = x2;
    }
    cout << showpoint << setprecision(9) << k * sum / 50.0;
    return 0;
}