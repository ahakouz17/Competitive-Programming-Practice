// https://codeforces.com/contest/266/problem/A
// solved: Aug/24/2013
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string co;
    int n, rt = 0;
    cin >> n;
    cin >> co;
    int j = 1;
    for (int i = 0; i < n - 1 && j < n;)
    {
        if (co[i] == co[i + 1])
        {
            rt++;
            i++;
        }
        else
        {
            i++;
            j = 1;
        }
    }

    cout << rt << endl;

    return 0;
}