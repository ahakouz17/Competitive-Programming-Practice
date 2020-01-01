'''
 * Project Euler #28: Number spiral diagonals
 * 
 * Starting with the number 1 and moving to the right in a clockwise direction a 5 by 5 spiral is formed as follows:
 * 
 *  21 22 23 24 25
 *  20  7  8  9 10
 *  19  6  1  2 11
 *  18  5  4  3 12
 *  17 16 15 14 13
 * 
 * It can be verified that the sum of the numbers on the diagonals is 101.
 * 
 * What is the sum of the numbers on the diagonals in a 1001 by 1001 spiral formed in the same way?
 * 
 * Answer: 669171001
 * https://www.hackerrank.com/contests/projecteuler/challenges/euler028/problem
'''
t = int(input())
for i in range(t):
    n = int(input())
    n = n // 2
    result = (16 * n**3 +26*n) // 3 + 10 * n**2 + 1
    print(result%1000000007)  