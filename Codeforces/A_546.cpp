#include <iostream>
using namespace std;
int main()
{
    long long int n, w, k, price;
    cin >> k >> n >> w;
    price = (w * (w + 1)) / 2.0 * k;
    cout << (n < price ? price - n : 0) << endl;
    return 0;
}