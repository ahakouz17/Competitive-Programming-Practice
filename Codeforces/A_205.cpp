// solved: 2013-11-30 17:39:56
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long int n, temp, mini = 1000000001, in;
    vector<int> c;
    cin >> n;
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        c.push_back(temp);
        if (temp < mini)
        {
            mini = temp;
            f = false;
            in = i;
        }
        else if (temp == mini)
            f = true;
    }
    if (f)
        cout << "Still Rozdil" << endl;
    else
        cout << in + 1 << endl;
    return 0;
}