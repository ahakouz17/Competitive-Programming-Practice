// solved: 2013-11-30 19:10:20
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> p;
    int n, temp, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == i)
        {
            p.push_back(-1);
            c++;
        }
        else
            p.push_back(temp);
    }
    bool f = false;
    for (int i = p.size() - 1; i >= 0; i--)
    {
        int a = p[i];
        if (a > 0)
            if (p[a] == i)
            {
                f = true;
                cout << c + 2 << endl;
                return 0;
            }
    }
    if (c == n)
        cout << c << endl;
    else
        cout << c + 1 << endl;
    return 0;
}