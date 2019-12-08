// https://codeforces.com/contest/133/problem/B
// solved: 2013-12-22 03:19:29
#include <iostream>
#include <string>
#include <cmath>
#include <bitset>
using namespace std;
int main()
{
    string code;
    cin >> code;
    string bits = "";
    for (int i = 0; i < code.length(); i++)
    {
        switch (code[i])
        {
        case '>':
            bits += "1000";
            break;
        case '<':
            bits += "1001";
            break;
        case '+':
            bits += "1010";
            break;
        case '-':
            bits += "1011";
            break;
        case '.':
            bits += "1100";
            break;
        case ',':
            bits += "1101";
            break;
        case '[':
            bits += "1110";
            break;
        case ']':
            bits += "1111";
        }
    }
    int num = 0;
    for (int i = bits.length() - 1; i >= 0; i--)
    {
        double in = bits.length() - 1 - i;
        int p = 1;
        if (bits[i] == '1')
        {
            for (int i = 0; i < in; i++)
                p = (p * 2) % 1000003;
            num = (num + p) % 1000003;
        }
    }
    cout << num;
    return 0;
}