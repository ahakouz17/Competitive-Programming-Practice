// solved: 2013-12-15 03:21:28
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    if (xa == xb)
    {
        if (xc == xa)
            cout << "TOWARDS";
        else if (yb > ya)
        {
            if (xc > xa)
                cout << "RIGHT";
            else
                cout << "LEFT";
        }
        else if (yb < ya)
        {
            if (xc > xa)
                cout << "LEFT";
            else
                cout << "RIGHT";
        }
        return 0;
    }
    if (ya == yb)
    {
        if (yc == ya)
            cout << "TOWARDS";
        else if (xb > xa)
        {
            if (yc > ya)
                cout << "LEFT";
            else
                cout << "RIGHT";
        }
        else if (xb < xa)
        {
            if (yc > ya)
                cout << "RIGHT";
            else
                cout << "LEFT";
        }
        return 0;
    }
    else
    {
        int dx = xa - xb, dy = ya - yb, dxc = xb - xc, dyc = yb - yc;
        if (dx < 0 && dy > 0)
        {
            if (dxc < 0 && dyc > 0)
                cout << "TOWARDS";
            else if (dxc < 0 && dyc < 0)
                cout << "LEFT";
            else
                cout << "RIGHT";
            return 0;
        }
        if (dx < 0 && dy < 0)
        {
            if (dxc < 0 && dyc < 0)
                cout << "TOWARDS";
            else if (dxc < 0 && dyc > 0)
                cout << "RIGHT";
            else
                cout << "LEFT";
            return 0;
        }
        if (dx > 0 && dy < 0)
        {
            if (dxc > 0 && dyc < 0)
                cout << "TOWARDS";
            else if (dxc < 0 && dyc < 0)
                cout << "RIGHT";
            else
                cout << "LEFT";
            return 0;
        }
        if (dx > 0 && dy > 0)
        {
            if (dxc > 0 && dyc > 0)
                cout << "TOWARDS";
            else if (dxc > 0 && dyc < 0)
                cout << "RIGHT";
            else
                cout << "LEFT";
            return 0;
        }
    }

    return 0;
}