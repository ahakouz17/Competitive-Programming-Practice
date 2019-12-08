#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    bool f = false;
    while (n--)
    {
        cin >> temp;
        if (temp == 1)
            f = true;
    }
    cout << ((f) ? -1 : 1) << endl;
    return 0;
}