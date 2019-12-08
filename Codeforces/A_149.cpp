// solved: 2013-12-23 11:07:45
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, temp;
    vector<int> m;
    cin >> n;
    for (int i = 0; i < 12; i++)
    {
        cin >> temp;
        m.push_back(temp);
    }
    sort(m.begin(), m.end());
    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int sum = 0, c = 0, in = 11;
    while (sum < n && c <= 11)
    {
        sum += m[in];
        in--;
        c++;
    }
    if (sum >= n)
        cout << c;
    else
        cout << -1;
    return 0;
}