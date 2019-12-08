// solved: 2013-12-17 15:26:55
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, sum = 0, temp;
    vector<int> ranks;
    ranks.push_back(0);
    for (int i = 1; i < n; i++)
    {
        cin >> temp;
        sum += temp;
        ranks.push_back(sum);
    }
    cin >> a >> b;
    cout << ranks[b - 1] - ranks[a - 1];
    return 0;
}