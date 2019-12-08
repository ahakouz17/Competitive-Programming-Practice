// solved: 2013-12-23 05:11:22
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string com, com1;
    vector<string> s;
    char temp = ' ';
    while (cin)
    {
        temp = ' ';
        while (temp == ' ')
        {
            temp = cin.peek();
            if (temp == ' ')
                cin.ignore();
        }
        if (temp != '"')
        {
            com1 = com;
            cin >> com;
            if (com1 != com)
            {
                com = '<' + com + '>';
                s.push_back(com);
            }
        }
        else
        {
            cin.ignore();
            cin.get(temp);
            com = "";
            while (temp != '"')
            {
                com += temp;
                cin.get(temp);
            }
            com = '<' + com + '>';
            s.push_back(com);
        }
        temp = cin.peek();
        if (temp != ' ' && temp != '"')
        {
            for (int i = 0; i < s.size(); i++)
                cout << s[i] << endl;
            return 0;
        }
    }
    return 0;
}