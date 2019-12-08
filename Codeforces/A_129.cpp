// solved: 2013-11-29 23:18:02
#include <iostream>
using namespace std;
int main()
{
    int n, num, e = 0, o = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        (num % 2 == 0) ? e++ : o++;
    }
    (o % 2 == 0) ? cout << e << endl : cout << o << endl;
    return 0;
}