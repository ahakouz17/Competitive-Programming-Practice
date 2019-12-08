// https://codeforces.com/contest/136/problem/B
// solved: 2013-12-22 11:55:54
#include <iostream>
#include <cmath>
using namespace std;

string ter(int a)
{
    string num = "";
    int rem;
    while (a >= 1)
    {
        rem = a % 3;
        if (rem == 0)
            num = '0' + num;
        else if (rem == 1)
            num = '1' + num;
        else
            num = '2' + num;
        a = a / 3;
    }
    return num;
}

int dec(string f)
{
    int sum = 0, s;
    for (int i = f.length() - 1; i >= 0; i--)
    {
        s = f[i] - 48;
        if (s == 1 || s == 2)
            sum += (s)*pow(3.0, f.length() - 1 - i);
    }
    return sum;
}

int main()
{
    int a, c;
    cin >> a >> c;
    string sa, sb = "", sc;
    sa = ter(a);
    sc = ter(c);
    if (sa.length() > sc.length())
        sc = string(sa.length() - sc.length(), '0') + sc;
    else if (sa.length() < sc.length())
        sa = string(sc.length() - sa.length(), '0') + sa;
    for (int i = 0; i < sa.length(); i++)
    {
        int rem;
        rem = (3 + sc[i] - 48) - (sa[i] - 48);
        if (rem >= 3)
            rem = sc[i] - 48 - (sa[i] - 48);
        if (rem == 0)
            sb += '0';
        else if (rem == 1)
            sb += '1';
        else
            sb += '2';
    }
    cout << dec(sb);
    return 0;
}