// https://codeforces.com/contest/157/problem/B
// solved: 2013-12-15 00:09:43
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

double pi = 3.1415926536, area = 0;
vector<int> rad;

int main()
{
    int n, temp;
    cin >> n;
    rad.push_back(0);
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        rad.push_back(temp);
    }
    sort(rad.begin(), rad.end());
    for (int i = rad.size() - 1; i > 0; i -= 2)
    {
        area += rad[i] * rad[i] - rad[i - 1] * rad[i - 1];
    }
    cout << setprecision(6) << area * pi << endl;

    return 0;
}