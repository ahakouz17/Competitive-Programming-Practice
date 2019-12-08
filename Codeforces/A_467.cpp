#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, c = 0, q, p;
    cin >> n;
    while (n)
    {
        cin >> p >> q;
        if (q - p >= 2)
            c++;
        n--;
    }
    cout << c;
    return 0;
}