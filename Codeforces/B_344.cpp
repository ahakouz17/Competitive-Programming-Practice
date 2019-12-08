// solved: 2013-11-28 18:20:06
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, sum;
    cin >> a >> b >> c;
    const int A = a;
    const int B = b;
    const int C = c;
    sum = a + b + c;
    if (sum % 2 != 0)
    {
        cout << "Impossible" << endl;
        return 0;
    }
    if (a == b && b == c && c % 2 != 0)
    {
        cout << "Impossible" << endl;
        return 0;
    }
    if (a == b && b == c && c % 2 == 0)
    {
        cout << a / 2 << " " << a / 2 << " " << a / 2 << endl;
        return 0;
    }
    int temp;

    if (c > b)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if (b > a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (c > b)
    {
        temp = b;
        b = c;
        c = temp;
    }

    if (b + c < a)
    {
        cout << "Impossible" << endl;
        return 0;
    }
    if (a == b && b != c && b + c != a)
    {
        if ((A == a && B == c) || (A == b && B == c) || (A == c && B == a) || (A == c && B == b))
            cout << c / 2 << " ";
        else if ((A == a && B == b) || (A == b && B == a))
            cout << a - c / 2 << " ";
        if ((B == a && C == c) || (B == b && C == c) || (B == c && C == a) || (B == c && C == b))
            cout << c / 2 << " ";
        else if ((B == a && C == b) || (B == b && C == a))
            cout << a - c / 2 << " ";
        if ((C == a && A == c) || (C == c && A == b) || (C == c && A == a) || (C == b && A == c))
            cout << c / 2 << " ";
        else if ((C == a && A == b) || (C == b && A == a))
            cout << b - c / 2 << " ";
        return 0;
    }
    else if (b == c && a != b && b + c != a)
    {
        if ((A == a && B == c) || (A == a && B == b) || (A == c && B == a) || (A == b && B == a))
            cout << c / 2 << " ";
        else if ((A == c && B == b) || (A == b && B == c))
            cout << a - c / 2 << " ";
        if ((B == a && C == c) || (B == a && C == b) || (B == c && C == a) || (B == b && C == a))
            cout << c / 2 << " ";
        else if ((B == c && C == b) || (B == b && C == c))
            cout << a - c / 2 << " ";
        if ((C == a && A == c) || (C == a && A == b) || (C == c && A == a) || (C == b && A == a))
            cout << c / 2 << " ";
        else if ((C == c && A == b) || (C == b && A == c))
            cout << b - c / 2 << " ";
        return 0;
    }
    if (b + c == a)
    {
        if (A == a && B == c)
            cout << c << " ";
        else if (A == a && B == b)
            cout << b << " ";
        else if (A == b && B == c)
            cout << 0 << " ";
        else if (A == b && B == a)
            cout << b << " ";
        else if (A == c && B == a)
            cout << c << " ";
        else if (A == c && B == b)
            cout << 0 << " ";
        if (B == a && C == c)
            cout << c << " ";
        else if (B == a && C == b)
            cout << b << " ";
        else if (B == b && C == c)
            cout << 0 << " ";
        else if (B == b && C == a)
            cout << b << " ";
        else if (B == c && C == a)
            cout << c << " ";
        else if (B == c && C == b)
            cout << 0 << " ";
        if (C == a && A == c)
            cout << c << " ";
        else if (C == a && A == b)
            cout << b << " ";
        else if (C == b && A == c)
            cout << 0 << " ";
        else if (C == b && A == a)
            cout << b << " ";
        else if (C == c && A == a)
            cout << c << " ";
        else if (C == c && A == b)
            cout << 0 << " ";
        return 0;
    }
    int bond = b, num = sum / 2;
    while ((a - bond) + (b - bond) < c)
    {
        bond--;
    }
    if ((a - bond) + (b - bond) == c)
    {
        if ((A == a && B == c) || (A == c && B == a))
            cout << a - bond << " ";
        else if ((A == a && B == b) || (A == b && B == a))
            cout << bond << " ";
        else if ((A == b && B == c) || (A == c && B == b))
            cout << b - bond << " ";
        if ((B == a && C == c) || (B == c && C == a))
            cout << a - bond << " ";
        else if ((B == a && C == b) || (B == b && C == a))
            cout << bond << " ";
        else if ((B == b && C == c) || (B == c && C == b))
            cout << b - bond << " ";
        if ((C == a && A == c) || (C == c && A == a))
            cout << a - bond << " ";
        else if ((C == a && A == b) || (C == b && A == a))
            cout << bond << " ";
        else if ((C == b && A == c) || (C == c && A == b))
            cout << b - bond << " ";

        return 0;
    }
    else
    {
        cout << "Impossible" << endl;
        return 0;
    }

    return 0;
}