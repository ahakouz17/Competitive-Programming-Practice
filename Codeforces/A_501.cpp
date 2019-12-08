#include <iostream>
using namespace std;
int main()
{
    int mp, vp, mt, vt, m, v;
    cin >> mp >> vp >> mt >> vt;
    m = max(3 * mp / 10.0, mp - (mp / 250.0) * mt);
    v = max(3 * vp / 10.0, vp - (vp / 250.0) * vt);
    if (m < v)
        cout << "Vasya";
    else if (m > v)
        cout << "Misha";
    else
        cout << "Tie";
    cout << endl;
    return 0;
}