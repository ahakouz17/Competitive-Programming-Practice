// solved: 2014-07-23 05:55:11
#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int main()
{
    stack<char> st;
    string s;
    cin >> s;
    char t;
    for (int i = 0; i < s.length(); i++)
    {
        if (!st.empty())
        {
            t = st.top();
            if (t == s[i])
                st.pop();
            else
                st.push(s[i]);
        }
        else
        {
            st.push(s[i]);
        }
    }
    stack<char> st2;
    while (!st.empty())
    {
        t = st.top();
        st.pop();
        st2.push(t);
    }
    while (!st2.empty())
    {
        cout << st2.top();
        st2.pop();
    }
    return 0;
}