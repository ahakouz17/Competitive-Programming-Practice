// https://codeforces.com/contest/216/problem/A
// solved: Aug/24/2013
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a * c + (b - 1) * (c + a - 1) << endl;
    return 0;
}