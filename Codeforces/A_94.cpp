// https://codeforces.com/contest/94/problem/A
// solved: 2013-11-05 
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string bits, byte;
    cin >> bits;
    string n0, n1, n2, n3, n4, n5, n6, n7, n8, n9;
    cin >> n0 >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9;
    int in = 0;
    for (int i = 0; i < 8; i++)
    {
        byte = bits.substr(in, 10);

        if (byte == n0)
            cout << 0;
        if (byte == n1)
            cout << 1;
        if (byte == n2)
            cout << 2;
        if (byte == n3)
            cout << 3;
        if (byte == n4)
            cout << 4;
        if (byte == n5)
            cout << 5;
        if (byte == n6)
            cout << 6;
        if (byte == n7)
            cout << 7;
        if (byte == n8)
            cout << 8;
        if (byte == n9)
            cout << 9;
        in += 10;
    }
    return 0;
}