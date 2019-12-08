// solved: 2013-11-30 20:04:56
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> p;
    int n, temp, n1 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (n == 1)
        {
            if (temp == 0)
                cout << 1 << endl;
            else
                cout << 0 << endl;
            return 0;
        }
        if (temp == 1)
        {
            temp = -1;
            n1++;
        }
        else
            temp = 1;
        p.push_back(temp);
    }
    if (n1 == n)
    {
        cout << n - 1 << endl;
        return 0;
    }
    int maxi = 0, sum = 0, n2 = 0, n2m = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += p[j];
            if (p[j] == -1)
                n2++;
            if (sum > maxi)
            {
                maxi = sum;
                n2m = n2;
            }
        }
        sum = 0;
        n2 = 0;
    }
    cout << maxi + n1 << endl;

    return 0;
}