// https://codeforces.com/contest/1/problem/A
// Author: Asma Hakouz
// Solved: Aug/15/2013


#include <iostream>
using namespace std;
void main()
{
    unsigned long long n = 0, m = 0, a = 0;
    cin >> n >> m >> a;
    unsigned long long l, w;
    l = m / a;
    w = n / a;
    unsigned long long num = 0;
    if (m % a)
        l++;
    if (n % a)
        w++;
    num = l * w;
    cout << num;
    cout << endl;
}