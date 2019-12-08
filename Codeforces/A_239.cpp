// solved: 2013-11-28 19:18:42
#include <iostream>
#include <vector>
using namespace std;
int main()

{
    long int n, k, y, x_bound;
    cin >> y >> k >> n;
    vector<int> num;
    x_bound = n - y;

    if (x_bound + y < k || x_bound <= 0)
    {
        cout << -1 << endl;
        return 0;
    }
    bool found = false;
    while (!found && x_bound > 0)
    {
        if ((x_bound + y) % k == 0)
            found = true;
        else
            x_bound--;
    }
    if (!found)
    {
        cout << -1 << endl;
        return 0;
    }
    while (x_bound > 0)
    {
        num.push_back(x_bound);
        x_bound -= k;
    }
    for (int i = num.size() - 1; i >= 0; i--)
        cout << num[i] << " ";

    return 0;
}