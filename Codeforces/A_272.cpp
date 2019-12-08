// solved: 2013-12-07 23:40:40
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, temp;
    cin >> n;
    n++;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> temp;
        sum += temp;
    }
    int c = 0;
    for (int i = sum + 1; i <= sum + 5; i++)
    {
        if ((i - 1) % n != 0)
            c++;
    }
    cout << c << endl;
    return 0;
}