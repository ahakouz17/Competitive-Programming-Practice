// solved: 2013-12-13 18:43:23
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int k, num;
    vector<int> panel(10, 0);
    char temp;
    cin >> k;
    k *= 2;
    for (int r = 0; r < 16; r++)
    {
        cin >> temp;
        if (temp != '.')
        {
            num = temp - 48;
            panel[num]++;
        }
    }
    int i = 1;
    while (i < panel.size())
    {
        if (panel[i] > k)
        {
            cout << "NO\n";
            return 0;
        }
        i++;
    }
    cout << "YES\n";
    return 0;
}