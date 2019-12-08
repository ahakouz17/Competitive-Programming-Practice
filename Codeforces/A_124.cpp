// solved: 2013-11-29
#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int up_bnd = n - a;
    if (up_bnd > b)
    {
        cout << b + 1 << endl;
        return 0;
    }
    else if (up_bnd <= b)
    {
        cout << up_bnd << endl;
        return 0;
    }
    return 0;
}