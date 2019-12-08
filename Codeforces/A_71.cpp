// https://codeforces.com/contest/71/problem/A
// Author: Asma Hakouz
// Solved: Aug/17/2013

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string w;
    while (n >= 0)
    {
        getline(cin, w);
        if (w.size() > 10)
            cout << w[0] << w.size() - 2 << w[w.size() - 1] << endl;
        else
            cout << w << endl;
        n--;
    }
    return 0;
}