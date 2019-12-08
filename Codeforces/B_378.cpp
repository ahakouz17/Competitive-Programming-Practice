// solved: 2013-12-29 21:24:31
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long int n;
    cin >> n;
    vector<long int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int k = n, i = 0, j = 0;
    while (k > 0)
    {
        if (a[i] < b[j])
        {
            i++;
            k--;
        }
        else if (a[i] > b[j])
        {
            j++;
            k--;
        }
    }
    for (int h = 0; h < n; h++)
    {
        if (h < n / 2 || (i - 1 >= h))
            cout << 1;
        else
            cout << 0;
    }
    cout << endl;
    for (int h = 0; h < n; h++)
    {
        if (h < n / 2 || (j - 1 >= h))
            cout << 1;
        else
            cout << 0;
    }
    return 0;
}