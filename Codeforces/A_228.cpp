// https://codeforces.com/contest/228/problem/A
// solved: 2013-08-25 
#include <iostream>
using namespace std;
int main()
{
    int c = 0;
    long long int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    if (s1 != s2 && s1 != s3 && s1 != s4)
        c++;
    else
        s1 = 0;
    if (s2 != s1 && s2 != s3 && s2 != s4)
        c++;
    else
        s2 = 0;
    if (s3 != s2 && s3 != s1 && s3 != s4)
        c++;
    else
        s3 = 0;
    if (s4 != s2 && s4 != s3 && s4 != s1)
        c++;
    cout << 4 - c << endl;
    return 0;
}