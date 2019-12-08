// solved: 2014-05-11 13:36:34
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n, m, k, t;
    cin >> n >> m >> k >> t;
    vector<int> waste;
    vector<string> crops(3);
    crops[0] = "Carrots";
    crops[1] = "Kiwis";
    crops[2] = "Grapes";
    int in = 0;
    int r, c;
    for (int i = 0; i < k; i++)
    {
        cin >> r >> c;
        waste.push_back((r - 1) * m + c - 1);
    }
    sort(waste.begin(), waste.end());
    while (t--)
    {
        cin >> r >> c;
        int p = (r - 1) * m + c - 1, in = 0;
        while (in < k && waste[in] < p)
            in++;
        if (waste[in] == p)
            puts("Waste");
        else
        {
            p -= in;
            cout << crops[p % 3];
            if (t > 0)
                cout << endl;
        }
    }
    return 0;
}