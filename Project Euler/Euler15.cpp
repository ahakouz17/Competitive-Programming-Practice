/*
 * Project Euler #15: Lattice paths
 * 
 * Starting in the top left corner of a 2×2 grid, and only 
 * being able to move to the right and down, there are exactly 
 * 6 routes to the bottom right corner.
 * 
 * How many such routes are there through a 20×20 grid?
 * 
 * Answer: 137846528820 ... after %(10^9+7) : 846527861
 */
#include <iostream> 
using namespace std;

long long int pascalTriangle[502][502];

int main(){
    int t, n, m;
    for(int r = 1; r<= 500; r++){
        for(int c = r; c <= 500; c++){
            if(r == 1){
                pascalTriangle[r][c] = 1;
                pascalTriangle[c][r] = 1;
            } else {
                pascalTriangle[r][c] = (pascalTriangle[r-1][c] + pascalTriangle[r][c-1]);// % 1000000007;
                pascalTriangle[c][r] = pascalTriangle[r][c];
            } 
        }
    }

    /*for(int r = 1; r<= 10; r++){
        for(int c = 1; c <= 10; c++){
            cout << pascalTriangle[r][c] << "\t";
        }
        cout<<endl;
     }*/
    
    cin >> t;
    while(t--){
        cin >> n >> m;
        printf("%lld\n", pascalTriangle[n+1][m+1]);

    }

    return 0;
}