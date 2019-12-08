// https://codeforces.com/contest/112/problem/A
// solved: Aug/24/2013 
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string g1, g2;

    {
        getline(cin, g1);
        getline(cin, g2);
        for (int i = 0; i <= g1.size(); i++)
        {
            if (g1[i] >= 97)
                g1[i] = g1[i] - 32;
            if (g2[i] >= 97)
                g2[i] = g2[i] - 32;
            if (!(g1[i] == g2[i]))
            {
                if (g1[i] > g2[i])
                {
                    cout << 1 << endl;
                    return 0;
                }
                else
                {
                    cout << -1 << endl;
                    return 0;
                }
            }
        }
    }
    cout << 0 << endl;
    return 0;
}