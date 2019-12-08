// solved: 2014-01-30 19:44:19
#include <iostream>
using namespace std;
int main()
{
    int h1, h2, t1, t2;
    char f;
    f = cin.peek();
    if (f == '0')
        cin.ignore();
    cin >> h1 >> f;
    f = cin.peek();
    if (f == '0')
        cin.ignore();
    cin >> h2;
    cin.ignore();
    f = cin.peek();
    if (f == '0')
        cin.ignore();
    cin >> t1 >> f;
    f = cin.peek();
    if (f == '0')
        cin.ignore();
    cin >> t2;
    int n1, n2;
    n1 = h1 - t1;
    n2 = h2 - t2;
    if (n2 < 0)
    {
        n2 = 60 + n2;
        n1--;
    }
    if (n1 < 0)
        n1 = 24 + n1;
    if (n1 < 10)
        cout << "0";
    cout << n1 << ":";
    if (n2 < 10)
        cout << "0";
    cout << n2;
    return 0;
}