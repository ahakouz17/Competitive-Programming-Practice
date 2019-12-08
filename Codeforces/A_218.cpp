// solved: 2013-12-17 03:46:31
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k, temp;
    cin >> n >> k;
    vector<int> poly;
    for (int i = 0; i < 2 * n + 1; i++)
    {
        cin >> temp;
        poly.push_back(temp);
    }
    for (int i = 1; i < 2 * n + 1; i += 2)
    {
        if (k == 0)
            break;
        if ((poly[i] - 1) > poly[i - 1] && (poly[i] - 1) > poly[i + 1])
        {
            poly[i]--;
            k--;
        }
    }
    for (int i = 0; i < 2 * n + 1; i++)
        cout << poly[i] << " ";
    return 0;
}