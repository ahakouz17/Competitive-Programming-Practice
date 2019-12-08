// solved: 2013-12-23 02:04:59
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> mov;
    int xs, ys, xt, yt;
    char temp;
    cin >> temp >> ys;
    xs = temp - 96;
    cin >> temp >> yt;
    xt = temp - 96;
    if (xt == xs && yt == ys)
    {
        cout << 0;
        return 0;
    }
    while (xs != xt || ys != yt)
    {
        if (xt == xs && yt != ys)
        {
            while (yt != ys)
            {
                if (ys < yt)
                {
                    ys++;
                    mov.push_back("U");
                }
                else
                {
                    ys--;
                    mov.push_back("D");
                }
            }
        }
        if (yt == ys && xs != xt)
        {
            while (xs != xt)
            {
                if (xs < xt)
                {
                    xs++;
                    mov.push_back("R");
                }
                else
                {
                    xs--;
                    mov.push_back("L");
                }
            }
        }
        if (ys > yt && xs > xt)
            while (ys != yt && xs != xt)
            {
                xs--;
                ys--;
                mov.push_back("LD");
            }
        else if (ys > yt && xs < xt)
            while (ys != yt && xs != xt)
            {
                ys--;
                xs++;
                mov.push_back("RD");
            }
        else if (ys < yt && xs < xt)
            while (ys != yt && xs != xt)
            {
                ys++;
                xs++;
                mov.push_back("RU");
            }
        else if (ys < yt && xs > xt)
            while (ys != yt && xs != xt)
            {
                ys++;
                xs--;
                mov.push_back("LU");
            }
        if (xs == xt && ys == yt)
            break;
    }
    cout << mov.size() << endl;
    for (int i = 0; i < mov.size(); i++)
        cout << mov[i] << endl;
    return 0;
}