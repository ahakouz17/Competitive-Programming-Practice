// solved: 2014-03-06 21:38:08
// https://codeforces.com/contest/394/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, x, n = 0, rem = 0, last;
    vector<int> num;
    cin >> p >> x;
    for (int i = 1; i <= 9; i++)
    {
        n = 1;
        last = i;
        rem = 0;
        num.push_back(i);
        if (p + x == 2)
        {
            cout << 1;
            return 0;
        }
        while (n < p)
        {
            int L = last;
            last = (L * x + rem) % 10;
            rem = ((L * x + rem) - (L * x + rem) % 10) / 10;
            num.push_back(last);
            n = num.size();
            if ((last * x + rem) == i && num.size() == p && last != 0)
            {
                for (int i = p - 1; i >= 0; i--)
                    cout << num[i];
                return 0;
            }
        }
        num.clear();
    }
    cout << "Impossible";
    return 0;
}