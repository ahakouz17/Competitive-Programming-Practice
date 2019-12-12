/*
 * 
 * A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
 *  a^2 + b^2 = c^2
 * 
 * For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
 * 
 * There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc.
 * 
 * Answer:  31875000
 */

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int multiply_matrix[3][2][2] = {{{2, -1},{1, 0}}, {{2, 1},{1, 0}}, {{1, 2},{0, 1}}};
map<int, int> triplet_sums;
const int MAX_N = 3005; 

void insertAllPairs(int a, int b, int c);
void generatePrimitiveTripletsTree(int m_n[]);

int main() {
    int t, n;
    // first primitive triplet is: 3,4,5
    // m = 2, n = 1
    // sum = 3+4+5 = 12
    // product = 3*4*5 = 60
    int m_n[2] = {2, 1};
    generatePrimitiveTripletsTree(m_n);
    insertAllPairs(3, 4, 5);
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        if (triplet_sums.count(n)==0){
            printf("-1\n");
        } else {
            printf("%d\n", triplet_sums[n]);
        }
    }

    return 0;
}

void insertAllPairs(int a, int b, int c){
    int a_mod= a, b_mod = b, c_mod = c, key;
    while(a_mod+b_mod+c_mod <= MAX_N){
        key = a_mod+b_mod+c_mod;
        if (triplet_sums.count(key)==0)
            triplet_sums[key] = a_mod*b_mod*c_mod;
        else {
            triplet_sums[key] = max(a_mod*b_mod*c_mod, triplet_sums[key]);
        }
        a_mod += a;
        b_mod += b;
        c_mod += c;
    }
}

void generatePrimitiveTripletsTree(int root_mn[]){
    int node[2], a, b, c;
    for(int i = 0; i < 3; i++){
        node[0] = multiply_matrix[i][0][0] * root_mn[0] + multiply_matrix[i][0][1] * root_mn[1];
        node[1] = multiply_matrix[i][1][0] * root_mn[0] + multiply_matrix[i][1][1] * root_mn[1];
        a = node[0]*node[0]-node[1]*node[1];
        b = 2*node[0]*node[1];
        c = node[0]*node[0]+node[1]*node[1];
        if (a+b+c > MAX_N) continue;
        insertAllPairs(a, b, c);
        generatePrimitiveTripletsTree(node);
    }
}


 /* BRUTE FORCE SOLUTION! - TLE
    
    map<int, int> squares;
    vector<int> square_values(1000);
    for(int i = 1; i < 1000; i++){
        squares[i*i] = i;
        square_values[i]=i*i;
    }
    while(t--){
        scanf("%d", &n);
        bool found = false;
        //int maxFound=-1;
        for(int a = 1; a < 1000; a++){
            if(2* a >= n) break;
            for(int b = a; b < 1000; b++){
                if(a+b >= n) break;
                int key = (square_values[a]+square_values[b]);
                if (squares.count(key) == 1 && a+b+squares[key]== n){
                    found = true;
                    printf("%d\n", a*b*squares[key]);
                    break;
                }
            }
            if(found) break;
        }
        if(!found) printf("-1\n");
        

    }*/
   