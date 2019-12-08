#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int w, h;
    cin >> w >> h;
    //h++; w++;
    long long int i = 2, ch = 0, cw = 0;
    while (1)
    {
        if (i <= h)
        {
            ch += (h - i + 1);
        }
        if (i <= w)
        {
            cw += (w - i + 1);
        }
        i += 2;
        if (i > h && i > w)
            break;
    }
    cout << ch * cw;
    return 0;
}