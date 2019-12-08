// solved: 2019-12-05 18:12:25
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n, temp, i, min_i, max_i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> ind(n);

        for (i = 0; i < n; i++) {
            cin >> temp;
            ind[temp - 1] = i;
        }

        cout << "1";
        min_i = ind[0];
        max_i = ind[0];
        for (i = 1; i < n; i++)  {
            min_i = min(min_i, ind[i]);
            max_i = max(max_i, ind[i]);
            if (max_i - min_i == i)  {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}