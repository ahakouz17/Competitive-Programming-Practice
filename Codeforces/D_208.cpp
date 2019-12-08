// solved: 2013-12-15 13:21:54
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    long long points = 0;
    vector<long long> p;
    vector<long long> val;
    vector<long long> prize(5, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        p.push_back(temp);
    }
    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        val.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        points += p[i];
        for (int j = 4; j >= 0; j--)
        {
            if (val[j] <= points)
            {
                prize[j] += points / val[j];
                points = points % val[j];
            }
            if (points < val[0])
                break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%I64d", prize[i]);
        cout << " ";
    };
    cout << endl;
    printf("%I64d", points);
    return 0;
}