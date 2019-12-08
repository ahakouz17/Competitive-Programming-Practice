// https://codeforces.com/contest/131/problem/A
// solved: Aug/24/2013
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sen, senO;
    getline(cin, sen);
    senO = sen;
    int chck = 0;
    if (sen[0] >= 97 && sen[1] >= 97) //SS
    {
        for (int j = 0; j < sen.size(); j++)
            if (sen[j] <= 90)
                chck = 1;
        if (!chck)
            cout << sen << endl;
        else
            cout << senO << endl;
        return 0;
    }

    else if (sen[0] <= 90 && sen[1] >= 97) //CS
    {
        chck = 0;
        for (int j = 0; j < sen.size(); j++)
            if (sen[j] <= 90)
                chck = 1;
        if (!chck)
            cout << sen << endl;
        else
            cout << senO << endl;
        return 0;
    }
    else if (sen[0] <= 90 && sen[1] <= 90) //CC
        for (int i = 0; i < sen.size(); i++)
        {
            if (sen[i] >= 97)
            {
                cout << senO << endl;
                return 0;
            }
            sen[i] += 32;
        }

    else // SC
    {
        sen[0] -= 32;
        for (int i = 1; i < sen.size(); i++)
        {
            if (sen[i] >= 97)
            {
                cout << senO << endl;
                return 0;
            }
            sen[i] += 32;
        }
    }

    cout << sen << endl;

    return 0;
}