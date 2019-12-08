// solved: 2013-12-17 02:40:47
#include <iostream>
using namespace std;
int main()
{
    int n;
    int *p;
    cin >> n;
    p = new int[n];
    for (int i = 0; i < n; i++)
        cin >> p[i];
    int maxi = p[0], mini = p[0], a = 0;
    for (int i = 1; i < n; i++)
    {
        if (p[i] > maxi)
        {
            maxi = p[i];
            a++;
        }
        else if (p[i] < mini)
        {
            mini = p[i];
            a++;
        }
    }
    cout << a << endl;
    return 0;
}