// solved: 2013-12-15 12:44:27
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    vector<vector<int>> sum(2, vector<int>(n, 0));
    for (int R = 0; R < n; R++)
    {
        for (int C = 0; C < n; C++)
        {
            cin >> temp;
            sum[0][R] += temp;
            sum[1][C] += temp;
        }
    }
    int count_winning = 0;
    for (int R = 0; R < n; R++)
    {
        for (int C = 0; C < n; C++)
        {
            if (sum[0][R] < sum[1][C])
                count_winning++;
        }
    }
    cout << count_winning;

    return 0;
}