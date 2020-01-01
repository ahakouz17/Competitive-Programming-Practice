/*
 * Project Euler #31: Coin sums
 *
 * In the United Kingdom the currency is made up of pound (£) and pence (p).
 * There are eight coins in general circulation:
 *      1p, 2p, 5p, 10p, 20p, 50p, £1 (100p), and £2 (200p).
 *
 * It is possible to make £2 in the following way:
 *      1×£1 + 1×50p + 2×20p + 1×5p + 1×2p + 3×1p
 *
 * How many different ways can £2 be made using any number of coins?
 *
 * Answer: 73682
 * https://www.hackerrank.com/contests/projecteuler/challenges/euler031/problem
 */

#include <bits/stdc++.h>
using namespace std;

const int MAX_AMOUNT = 100005;
const int CHANGE_OPTIONS = 9;
long long int ways[CHANGE_OPTIONS][MAX_AMOUNT];
int change[] = {0, 1, 2, 5, 10, 20, 50, 100, 200};

void countAllways(){
    for(int amount = 0; amount <= MAX_AMOUNT; amount++){
        for(int piece = 0; piece < CHANGE_OPTIONS; piece++){
            if      (amount == 0)   ways[piece][amount] = 1;
            else if (piece == 0)    ways[piece][amount] = 0;
            else if (amount-change[piece] >= 0){
                ways[piece][amount] = (ways[piece-1][amount])%1000000007;
                ways[piece][amount] = (ways[piece][amount] +ways[piece][amount-change[piece]])%1000000007;
            }
            else  ways[piece][amount] = ways[piece-1][amount] % 1000000007;
        }
    }
}
long long int countWaysForAmount(int actual_amount){
    return ways[CHANGE_OPTIONS-1][actual_amount] % 1000000007;
}

int main(){
    int t, n;
    scanf("%d", &t);
    countAllways();
    while(t--){
        scanf("%d", &n);
        cout << countWaysForAmount(n)<<endl;

    }
    return 0;
}
