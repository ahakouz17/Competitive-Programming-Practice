// https://codeforces.com/contest/119/problem/A
// solved: 2013-08-28 
#include <iostream>
using namespace std;

int gcd(int, int);

int main()
{
    int a, b, n, d;
    cin >> a >> b >> n;
    while (n >= 0)
    {
        if (n == 0)
        {
            cout << "1\n";
            return 0;
        }
        d = gcd(a, n);
        n = n - d;
        if (n < 0)
        {
            cout << "0\n";
            return 0;
        }
        if (n == 0)
        {
            cout << "0\n";
            return 0;
        }
        d = gcd(b, n);
        n = n - d;
        if (n < 0)
        {
            cout << '1' << endl;
            return 0;
        }
    }
}

int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    a = a % b;
    return gcd(b, a);
}