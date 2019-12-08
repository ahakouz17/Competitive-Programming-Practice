// https://codeforces.com/contest/133/problem/A
// solved: Aug/24/2013
#include <iostream >
#include <string>
using namespace std;
int main()
{
    string com;
    cin >> com;

    for (int i = 0; i < com.size(); i++)
    {
        if (com[i] == 'H' || com[i] == 'Q' || com[i] == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}