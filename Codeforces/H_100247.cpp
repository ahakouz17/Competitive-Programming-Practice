// solved: 2014-01-31 04:29:59
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, s = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < n; i++)
    {
        while (a[i] == b[i] && i < n)
            i++;
        if (i < n && a[i] != b[i])
            s++;
        while (a[i] != b[i] && i < n)
            i++;
    }
    cout << s;
    return 0;
}