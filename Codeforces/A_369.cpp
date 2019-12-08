// solved: 2014-01-08 02:16:37
#include <iostream>
using namespace std;
int main()
{
    int n, nb, np, temp, wash = 0;
    cin >> n >> np >> nb;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        if (temp == 1)
        {
            if (np > 0)
                np--;
            else
                wash++;
        }
        else
        {
            if (nb > 0)
                nb--;
            else
            {
                if (np > 0)
                    np--;
                else
                    wash++;
            }
        }
        if (np == 0 && nb == 0)
        {
            wash += n - i;
            break;
        }
    }
    cout << wash;
    return 0;
}