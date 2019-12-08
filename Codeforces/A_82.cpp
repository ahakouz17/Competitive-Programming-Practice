// https://codeforces.com/contest/82/problem/A
// solved: 2013-08-28 
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    long long int n, i, b;
    cin >> n;
    long long int sum = n - 5, c = 1;
    if (n > 5)
    {
        for (c = 2; sum > c * 5;)
        {
            sum -= c * 5;
            c *= 2;
        }
        b = (sum - 1) / c + 1;
    }
    else
        b = n;
    if (b == 1)
        cout << "Sheldon\n";
    else if (b == 2)
        cout << "Leonard\n";
    else if (b == 3)
        cout << "Penny\n";
    else if (b == 4)
        cout << "Rajesh\n";
    else if (b == 5)
        cout << "Howard\n";
    return 0;
}