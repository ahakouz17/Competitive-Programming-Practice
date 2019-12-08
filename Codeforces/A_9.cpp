// https://codeforces.com/contest/9/problem/A
// solved: Aug/24/2013
#include <iostream>
using namespace std;
int main()
{
    int y, w;
    cin >> y >> w;
    int prob, maxi;
    if (y > w)
        maxi = y;
    else
        maxi = w;

    prob = (7 - maxi);

    if (prob % 2 && prob % 3)
    {
        cout << prob << "/6" << endl;
        return 0;
    }
    if (prob == 6)
    {
        cout << prob / 6 << "/1" << endl;
        return 0;
    }
    if (prob % 2 == 0)
    {
        cout << prob / 2 << "/3" << endl;
        return 0;
    }
    if (prob % 3 == 0)
    {
        cout << prob / 3 << "/2" << endl;
        return 0;
    }
}