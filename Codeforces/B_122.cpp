// https://codeforces.com/contest/122/problem/B
// solved:Aug/22/2013
#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n4 = 0, n7 = 0;
    string st;
    getline(cin, st);
    for (int i = 0; i <= st.size() - 1; i++)
    {
        if (st[i] == '4')
            n4++;
        else if (st[i] == '7')
            n7++;
    }
    if (n4 && n4 >= n7)
        cout << 4;
    else if (n7 && n7 > n4)
        cout << 7;
    else
        cout << -1;

    return 0;
}