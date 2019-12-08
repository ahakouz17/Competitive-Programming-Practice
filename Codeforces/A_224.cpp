// solved 2013-12-17 00:41:14
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a, b, c;
    c = sqrt(n2 * n3 / n1);
    a = n3 / c;
    b = n2 / c;
    cout << 4 * (a + b + c) << endl;
    return 0;
}