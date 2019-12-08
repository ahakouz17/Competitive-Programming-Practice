#include <iostream>
using namespace std;
int main()
{
    int r, c, turns = 0, nodes;
    cin >> r >> c;
    nodes = r * c;
    while (r * c != 0)
    {
        turns++;
        nodes -= (r + c - 1);
        r--;
        c--;
    }
    if (turns % 2 == 0)
        cout << "Malvika";
    else
        cout << "Akshat";
    return 0;
}