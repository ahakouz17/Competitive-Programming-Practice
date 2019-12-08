// solved: 2013-11-30 20:22:53
#include <iostream>
using namespace std;
int main()
{
    int n, min_in, max_in, temp, mini = 101, maxi = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp < mini)
        {
            mini = temp;
            min_in = i;
        }
        if (temp > maxi)
        {
            maxi = temp;
            max_in = i;
        }
        if (temp == mini)
        {
            if (i > min_in)
                min_in = i;
        }
        if (temp == maxi)
        {
            if (i < max_in)
                max_in = i;
        }
    }
    int m = 0;
    if (max_in > min_in)
        min_in++;
    cout << (n - 1 - min_in) + max_in << endl;
    return 0;
}