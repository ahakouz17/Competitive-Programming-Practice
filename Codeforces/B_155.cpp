// solved: 2013-12-17 04:07:54
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    vector<pair<int, int>> cards(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cards[i] = make_pair(b, a);
    }
    sort(cards.begin(), cards.end());
    int points = 0, rem = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        rem += cards[i].first;
        points += cards[i].second;
        rem--;
        if (rem == 0)
            break;
    }
    cout << points;
    return 0;
}