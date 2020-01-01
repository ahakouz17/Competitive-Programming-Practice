/*
 * Project Euler #39: Integer right triangles
 * 
 * If p is the perimeter of a right angle triangle with integral length sides, {a,b,c},
 * there are exactly three solutions for p = 120.
 * 
 * {20,48,52}, {24,45,51}, {30,40,50}
 * For which value of p ≤ 1000, is the number of solutions maximised?
 * 
 * Answer: 840
 * https://www.hackerrank.com/contests/projecteuler/challenges/euler039/problem
 */
#include <bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;
int multiply_matrix[3][2][2] = {{{2, -1},{1, 0}}, {{2, 1},{1, 0}}, {{1, 2},{0, 1}}};
const int MAX_N = 5000001; 
vector<int> triplet_sumsFreq(MAX_N, 0);

void generatePrimitiveTripletsTree(int m_n[]);
void insertAllPairs(int a, int b, int c);

int main(){
    int t, n;
    // first primitive triplet is: 3,4,5
    // m = 2, n = 1
    // sum = 3+4+5 = 12
    // product = 3*4*5 = 60
    //auto start = high_resolution_clock::now(); 
    int m_n[2] = {2, 1};
    generatePrimitiveTripletsTree(m_n);
    insertAllPairs(3, 4, 5);
    int i = 0, maxCount = 0;
    int maxCountIndex = 0;
    for(int j = 0; j < MAX_N; j++){
        int temp = triplet_sumsFreq[j];
        if(maxCount < temp){
            maxCount = temp;
            maxCountIndex = j;
            triplet_sumsFreq[j] = j;
        } else {
            triplet_sumsFreq[j] = maxCountIndex;
        }
        //cout << p.first << " ";
    }
    //auto stop = high_resolution_clock::now(); 
    //auto duration = duration_cast<milliseconds>(stop - start); 
    //cout << duration.count()/1000.0 << endl; 
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        printf("%d\n", triplet_sumsFreq[n]);
    }

    return 0;
}

void insertAllPairs(int a, int b, int c){
    int a_mod= a, b_mod = b, c_mod = c, key;
    while(a_mod+b_mod+c_mod <= MAX_N){
        key = a_mod+b_mod+c_mod;
        triplet_sumsFreq[key] += 1;
        a_mod += a;
        b_mod += b;
        c_mod += c;
    }
}

void generatePrimitiveTripletsTree(int root_mn[]){
    int node[2], a, b, c;
    if (root_mn[0] > 1200){
        return;
    }
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
