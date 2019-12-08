// https://codeforces.com/contest/4/problem/A
// Author: Asma Hakouz
// solved: Aug/15/2013
#include <iostream>
using namespace std;
void main()
{
    int w;
    cin >> w;
    if (!(w % 2) && w != 2)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}