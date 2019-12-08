// solved: 2013-11-28 08:54:06
#include <iostream>
using namespace std;
int main()
{
    int n, c = 1, temp = 0, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (i != 0 && num != temp)
        {
            c++;
            temp = num;
        }
        else if (i == 0)
            temp = num;
    }
    cout << c << endl;

    return 0;
}