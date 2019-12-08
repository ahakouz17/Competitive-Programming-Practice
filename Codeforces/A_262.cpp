// solved: 2014-01-10 13:29:00
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, l = 0;
    string num;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num.size() <= k)
        {
            l++;
            continue;
        }
        size_t c = count(num.begin(), num.end(), '4');
        size_t b = count(num.begin(), num.end(), '7');
        c += b;
        if (c <= k)
        {
            l++;
        }
    }
    cout << l;
    return 0;
}