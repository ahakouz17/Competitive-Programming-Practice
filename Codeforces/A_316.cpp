// solved: 2013-11-10
#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n>>k;
    const int N=n;
    int sq[N][N];
    int rem;
    int f;
    rem = k%n;
    f=k/n;
    int rin=0;
    if(rem!=0)
    {
        for(int r=0; r<n; r++)
        {
            for(int c=0; c<n; c++)
            {
                if (c==rin) {sq[r][c]=rem+f;}
                else sq[r][c]=f;
            }
         rin++;
        }
    }
    else
    {
        for(int r=0; r<n; r++)
        {
            for(int c=0; c<n; c++)
            {
             sq[r][c]=f;
            }
        }
    }
        for(int r=0; r<n; r++)
        {
            for(int c=0; c<n; c++)
            {
             cout<<sq[r][c]<<" ";
            }
            cout<<endl;
        }
    return 0;
}