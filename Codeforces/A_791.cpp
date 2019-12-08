// solved: 2019-11-20 01:12:13
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float w1, w2;
    cin >> w1 >> w2;
    float d = w2 - w1, n1, n;
    n1 = log2((d + w1) / w1) / log2(1.5);
    n = ceil(log2((d + w1) / w1) / log2(1.5));
    if (n1 == n)
        n++;
    cout << n << endl;
    return 0;
}