#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int n, no_right = 0;
    scanf("%i", &n);
    vector<vector<int>> cows(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &cows[i][0]);
        if (cows[i][0])
            no_right++;
        cows[i][1] = no_right;
    }
    long long int cost = 0;
    int no_cows = n;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!cows[i][0])
        {
            cost += cows[i][1];
        }
    }
    cout << cost << endl;
}