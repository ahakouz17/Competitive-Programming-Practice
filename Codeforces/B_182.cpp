// solved: 2013-12-17 14:41:32
#include <iostream>
using namespace std;
int main()
{
    int temp, d, n, sum = 0;
    cin >> d >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> temp;
        sum += temp;
    }
    cin.ignore();
    cout << (n - 1) * d - sum;
    return 0;
}