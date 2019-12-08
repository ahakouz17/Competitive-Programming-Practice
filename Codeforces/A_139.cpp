// solved:2013-12-17 14:41:32
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, temp, sum = 0;
    cin >> n;
    vector<int> days;
    for (int i = 0; i < 7; i++)
    {
        cin >> temp;
        sum += temp;
        days.push_back(temp);
    }
    n = n % sum;
    if (n == 0)
    {
        int j = 6;
        while (j >= 0)
        {
            if (days[j] != 0)
            {
                cout << j + 1;
                return 0;
            }
            j--;
        }
    }
    int i = 0;
    while (n > 0)
    {
        n -= days[i];
        if (n > 0)
            i++;
    }
    cout << i + 1;
    return 0;
}