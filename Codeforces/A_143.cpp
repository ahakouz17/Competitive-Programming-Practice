// solved: 2013-12-24 11:25:25
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3, n4, n5, n6;
    cin >> n2 >> n1 >> n4 >> n5 >> n3 >> n6;
    int a, b, c, d;
    a = (n3 - n1 + n4) / 2;
    d = (n3 - a);
    c = n4 - a;
    b = n5 - d;
    if (a > 9 || b > 9 || c > 9 || d > 9 || a == b || b == c || c == d || b == d || a == c || a == d || a <= 0 || b <= 0 || c <= 0 || d <= 0)
        cout << -1;
    else
        cout << a << " " << b << endl
             << c << " " << d;
    return 0;
}